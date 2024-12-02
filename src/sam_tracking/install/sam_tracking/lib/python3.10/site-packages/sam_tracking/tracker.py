import rclpy
from rclpy.node import Node
import os, sys, csv
import cv2
import torch
import numpy as np
from PIL import Image
import matplotlib.pyplot as plt
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2

sys.path.append(os.path.abspath("/home/parallels/sam2")) ### CHANGE DEPENDING ON LOCAL LOCATION

from torchvision import transforms
from torchvision.models.detection import maskrcnn_resnet50_fpn, MaskRCNN_ResNet50_FPN_Weights
from datetime import datetime
from sam2.build_sam import build_sam2_video_predictor
from matplotlib.patches import Rectangle
from collections import OrderedDict

from dynorb_interface.srv import FeedFrame
# from dynorb_interface.srv import DynClass
from sensor_msgs.msg import Image

class SAMTracker(Node):
    def __init__(self):
        super().__init__('sam_tracker')
        ## initialize directories, device, and relevant class information
        # torch.autocast(device_type="cuda", dtype=torch.bfloat16).__enter__()
        self.coredir = "/home/parallels/sam2"   ### CHANGE DEPENDING ON LOCAL LOCATION

        self.model = maskrcnn_resnet50_fpn(weights=MaskRCNN_ResNet50_FPN_Weights.COCO_V1)
        self.model.eval()  # Set to evaluation mode

        self.device = torch.device("cpu")

        self.sam2_checkpoint = "/home/parallels/sam2/checkpoints/sam2.1_hiera_small.pt"
        self.model_cfg = "configs/sam2.1/sam2.1_hiera_s.yaml"
        self.predictor = build_sam2_video_predictor(self.model_cfg, self.sam2_checkpoint, device=self.device)
        
        self.inference_state = None
        self.current_frame_mask = None

        self.process_frame_srv = self.create_service(FeedFrame, 'feed_frame', self.process_frame)
        # self.get_class_srv = self.create_service(DynClass, 'get_class', self.get_class)
        self.mask_publisher = self.create_publisher(Image, "mask_seg", 4)
        self.cv_bridge = CvBridge()

        with open("./sam_tracking/coco-labels-paper.txt", 'r') as file:   ### REMEMBER TO COPY TXT INTO SAM2 DIR
            # Read all lines and strip newlines, then store each line as an element in a list
            lines = file.readlines()

        # Strip newline characters and store each line as a string in a list
        self.class_names = [line.strip() for line in lines]

        self.frame_stride = 5      ### increase for closer to real-time
        self.frame_idx = -1
        self.obj_count = 0

    def _get_dynamic_segmentation(self, image):
        """
        Core COCO Application ~ applies pre-trained model on input, finds which masks are high scoring and "dynamic", and adds them to a mask list
        """
        masks = []
        # Run inference on the image
        self.get_logger().info("running inference")
        with torch.no_grad():
            prediction = self.model(image)

        self.get_logger().info("processing inference")
        # Process the results
        result = prediction[0]  # Get the first (and only) image result
        for i, class_id in enumerate(result['labels']):
            class_name = self.class_names[class_id.item()]

            # Check if the class is in the list of dynamic objects we care about
            dynamic_classes = ['person', 'bicycle', 'car', 'motorcycle', 'airplane', 'bus', 'train', 'truck',
                                'boat']
            if class_name in dynamic_classes and result["scores"][i] > .9:
                object_mask = result['masks'][i, 0].cpu().numpy()
                object_mask = np.round(object_mask).astype(np.int32)
                masks.append(object_mask)

        self.get_logger().info(masks)
        return masks, result

    def _prepare_data(
            self,
            img,
            image_size=1024,
            img_mean=(0.485, 0.456, 0.406),
            img_std=(0.229, 0.224, 0.225),
        ):
        """
        For preparing a frame matrix to the mask_step pipeline
        """
        if isinstance(img, np.ndarray):
            img_np = img
            img_np = cv2.resize(img_np, (image_size, image_size)) / 255.0
            height, width = img.shape[:2]
        else:
            img_np = (
                    np.array(img.convert("RGB").resize((image_size, image_size))) / 255.0
            )
            width, height = img.size
        img = torch.from_numpy(img_np).permute(2, 0, 1).float()

        img_mean = torch.tensor(img_mean, dtype=torch.float32)[:, None, None]
        img_std = torch.tensor(img_std, dtype=torch.float32)[:, None, None]
        img -= img_mean
        img /= img_std
        return img, width, height

    def _coco_mask(self, im):
        """
        Input an image and receive a list of masks that belong to high scoring dynamic objects
        """
        # Load the input image
        # im = Image.open(image_path).convert("RGB")
        # im = Image.fromarray(np.uint8(im))
        # Define the transformations for the input
        # transform = transforms.Compose([transforms.ToTensor()])
        im_tensor = im.unsqueeze(0)  # Add batch dimension

        self.get_logger().info("segmenting")
        masks_, result = self._get_dynamic_segmentation(im_tensor)
        self.get_logger().info(result)
        return masks_

    def _get_feature(self, img, batch_size):
        """
        Feature calling for mask_step function
        """
        if self.device == torch.device("cuda"):
            image = img.cuda().float().unsqueeze(0)
        else:
            image = img.cpu().float().unsqueeze(0)
        backbone_out = self.predictor.forward_image(image)
        expanded_image = image.expand(batch_size, -1, -1, -1)
        expanded_backbone_out = {
            "backbone_fpn": backbone_out["backbone_fpn"].copy(),
            "vision_pos_enc": backbone_out["vision_pos_enc"].copy(),
        }
        for i, feat in enumerate(expanded_backbone_out["backbone_fpn"]):
            expanded_backbone_out["backbone_fpn"][i] = feat.expand(
                batch_size, -1, -1, -1
            )
        for i, pos in enumerate(expanded_backbone_out["vision_pos_enc"]):
            pos = pos.expand(batch_size, -1, -1, -1)
            expanded_backbone_out["vision_pos_enc"][i] = pos

        features = self.predictor._prepare_backbone_features(expanded_backbone_out)
        features = (expanded_image,) + features
        return features

    def _get_orig_video_res_output(self, any_res_masks):
        """
        Resize the object scores to the original video resolution (video_res_masks)
        and apply non-overlapping constraints for final output.
        """
        device = self.inference_state["device"]
        video_H = self.inference_state["video_height"]
        video_W = self.inference_state["video_width"]
        any_res_masks = any_res_masks.to(device, non_blocking=True)
        if any_res_masks.shape[-2:] == (video_H, video_W):
            video_res_masks = any_res_masks
        else:
            video_res_masks = torch.nn.functional.interpolate(
                any_res_masks,
                size=(video_H, video_W),
                mode="bilinear",
                align_corners=False,
            )
        return any_res_masks, video_res_masks
        
    def _initialize_from_frame(self, frame, height, width, compute_device=torch.device("cpu")):
        inference_state = {}
        inference_state["images"] = [frame]
        inference_state["num_frames"] = 1
        inference_state["offload_video_to_cpu"] = True
        inference_state["offload_state_to_cpu"] = True
        # the original video height and width, used for resizing final output scores
        inference_state["video_height"] = height
        inference_state["video_width"] = width
        inference_state["device"] = compute_device
        inference_state["storage_device"] = torch.device("cpu")
        inference_state["point_inputs_per_obj"] = {}
        inference_state["mask_inputs_per_obj"] = {}
        # visual features on a small number of recently visited frames for quick interactions
        inference_state["cached_features"] = {}
        # values that don't change across frames (so we only need to hold one copy of them)
        inference_state["constants"] = {}
        # mapping between client-side object id and model-side object index
        inference_state["obj_id_to_idx"] = OrderedDict()
        inference_state["obj_idx_to_id"] = OrderedDict()
        inference_state["obj_ids"] = []
        # A storage to hold the model's tracking results and states on each frame
        inference_state["output_dict"] = {
            "cond_frame_outputs": {},  # dict containing {frame_idx: <out>}
            "non_cond_frame_outputs": {},  # dict containing {frame_idx: <out>}
        }
        # Slice (view) of each object tracking results, sharing the same memory with "output_dict"
        inference_state["output_dict_per_obj"] = {}
        # A temporary storage to hold new outputs when user interact with a frame
        # to add clicks or mask (it's merged into "output_dict" before propagation starts)
        inference_state["temp_output_dict_per_obj"] = {}
        # Frames that already holds consolidated outputs from click or mask inputs
        # (we directly use their consolidated outputs during tracking)
        inference_state["consolidated_frame_inds"] = {
            "cond_frame_outputs": set(),  # set containing frame indices
            "non_cond_frame_outputs": set(),  # set containing frame indices
        }
        # metadata for each tracking frame (e.g. which direction it's tracked)
        inference_state["tracking_has_started"] = False
        inference_state["frames_already_tracked"] = {}
        # Warm up the visual backbone and cache the image feature on frame 0
        self.predictor._get_image_feature(inference_state, frame_idx=0, batch_size=1)
        self.inference_state = inference_state

    def _init_tracker(self, frame, height, width):
        """
        Core initialization every few frames for storing an image + mask inside the predictor's inference state
        Used for transfering this masks into the other frames
        Outputs a combined mask for the initializing frame ~ comes straight from the COCO model output
        """        
        self._initialize_from_frame(frame, height, width)

        self.frame_idx = 0  # the frame index we interact with
        self.obj_count = 0  # give a unique id to each object we interact with (it can be any integers)

        self._calculate_masks(frame)

    def _calculate_masks(self, frame):
        masks = self._coco_mask(frame)
        for m in masks:
            mask = np.array(m, dtype=np.float32)
            _, out_obj_ids, out_mask_logits = self.predictor.add_new_mask(
                inference_state=self.inference_state,
                frame_idx=self.frame_idx,
                obj_id=self.obj_count,
                mask=mask,
            )
            self.obj_count += 1
    
    # TODO add conditional mask adding
    def process_frame(self, request, response):
        self.get_logger().info('Recieved frame request')
        cv_img = self.cv_bridge.imgmsg_to_cv2(request.frame)
        # im = Image.fromarray(np.uint8(cv_img)).convert("MONO8")
        img, w, h = self._prepare_data(cv_img)

        #just initialize and return the number of dynamic objects
        if self.frame_idx<0:
            self._init_tracker(img, h, w)
            response.count = self.obj_count
            return response
        
        #otherwise, we're gonna add the frame
        self.frame_idx+=1
        self.inference_state["images"] = self.inference_state["images"].append(request.frame)
        self.inference_state["num_frames"] = self.frame_idx

        #process the next frame
        masks = self._mask_step(img)

        #convert to ROS msg
        v_image = self.cv_bridge.imgmsg_to_cv2(masks, desired_encoding="mono8")
        response.seg = v_image
        self.get_logger().info('Responding to frame request')

        return response

    def _mask_step(self, img):
        """
        With an initialized inference state in the class, the mask_step takes the encoded mask / image and takes "a step" to the next frame
        This takes in a frame (and a semi-arbitrary iteration #) and outputs a combined mask of dynamic objects
        """
        output_dict = self.inference_state["output_dict"]
        batch_size = len(self.inference_state["obj_idx_to_id"])

        # # Retrieve correct image features
        (
            _,
            _,
            current_vision_feats,
            current_vision_pos_embeds,
            feat_sizes,
        ) = self._get_feature(img, batch_size)

        current_out = self.predictor.track_step(
            frame_idx=self.frame_idx,
            is_init_cond_frame=False,
            current_vision_feats=current_vision_feats,
            current_vision_pos_embeds=current_vision_pos_embeds,
            feat_sizes=feat_sizes,
            point_inputs=None,
            mask_inputs=None,
            output_dict=output_dict,
            num_frames= self.inference_state["num_frames"],
            track_in_reverse=False,
            run_mem_encoder=True,
            prev_sam_mask_logits=None,
        )
        pred_masks_gpu = current_out["pred_masks"]
        _, self.current_frame_mask = self._get_orig_video_res_output(pred_masks_gpu)

        # visualize the masks
        mask_combined = np.full((self.inference_state["video_height"], self.inference_state["video_width"]), fill_value=-1)  # Copy original image
        for mask in self.current_frame_mask:
            m = (mask > 0.0).permute(1, 2, 0).cpu().numpy().astype(np.bool_)
            if m.ndim == 3:
                m = m[:, :, 0]  # Drop the third dimension if the mask is (height, width, 1)
            mask_combined[m == 1] = 1  # Add the red mask on top
            v_image = self.cv_bridge.imgmsg_to_cv2(mask, desired_encoding='passthrough')
            self.mask_publisher.publish(v_image)
        self.get_logger().info('Processed masks')
        return mask_combined

    # def get_class(self, request, response):
    #     print(self.current_frame_mask)
    #     response.cat = self.current_frame_mask[request.x][request.y]
    #     return response

def main():
    rclpy.init()

    minimal_service = SAMTracker()

    rclpy.spin(minimal_service)

    rclpy.shutdown()


if __name__ == '__main__':
    main()