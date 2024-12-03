# **DynOrb with ROS 2 Humble**

Based off of ORB_SLAM2: https://github.com/raulmur/ORB_SLAM2/tree/master

This repository contains instructions for setting up and running DynOrb with ROS 2 Humble, utilizing the TUM dataset for monocular SLAM. Follow the steps below to install and run the system.

You will need to pull dynorb as a submodule.

---

## **Prerequisites**

Before you start, make sure you have the following dependencies installed:

- **ROS 2 Humble**  
- **DynOrb** (See the installation instructions below)
- **TUM RGBD Dataset** (Download the dataset from the [TUM RGBD dataset website](https://vision.in.tum.de/data/datasets/rgbd-dataset))

---

## **Step 1: Install DynOrb**

To install DynOrb, follow these steps:

1. **Clone the DynOrb repository:**

   ```bash
   git clone https://github.com/kn1451j/DynOrb.git
   cd DynOrb```
   
2. **Install dependencies:**

Follow the instructions in the DynOrb repository to install any required dependencies, such as OpenCV, Eigen, ROS2, etc.

3. **Build DynOrb:**

Build the project using colcon from DynOrbBase directory:

```
cd DynOrbBase
colcon build
source install/setup.bash
```

## **Step 2: Install ROS 2 Humble**

To install ROS 2 Humble on Ubuntu, follow these steps:

Set up the ROS 2 repository:

```sudo apt update && sudo apt upgrade
sudo apt install curl gnupg lsb-release
sudo curl -sSL http://repo.ros2.org/repos.yaml | sudo tee /etc/apt/sources.list.d/ros2-latest.list
```

**Install ROS 2 Humble:**

```sudo apt update
sudo apt install ros-humble-desktop
```

**Source the ROS 2 environment:**
```
source /opt/ros/humble/setup.bash
```

After installation, source the ROS 2 setup script:

```
source /opt/ros/humble/setup.bash
```

**Install additional dependencies (if required):**

Install any extra dependencies specified by the project using apt:

```sudo apt install ros-humble-<package-name>```

# **Step 3: Running the System**

To run the DynOrb system from the DynOrbBase directory, follow these steps:

**1. Run the ROS 2 Tracking Node**

Open a terminal and source the ROS 2 environment:

```
source install/setup.bash
```

Then, navigate to the DynOrbBase directory and run:

```
cd DynOrbBase/src
ros2 run sam_tracking tracker
```

This will launch the ROS 2 node for tracking.

**2. Run the Monocular SLAM System with TUM Dataset**

Open another terminal and source the ROS 2 environment again:

```
source install/setup.bash
```

Navigate to the directory where you have the mono_tum executable, and run:

```
cd DynORBBase/src/dynorb
./Examples/Monocular/mono_tum Vocabulary/ORBvoc.txt Examples/Monocular/TUM1.yaml YOUR_DATASET_DIR/rgbd_dataset_freiburg1_desk
```

Replace the following:

YOUR_DATASET_DIR: The directory where you have downloaded the TUM RGBD dataset.

ORBvoc.txt: The vocabulary file used for SLAM (should be included in the Examples/Monocular directory).

TUM1.yaml: The configuration file for the monocular system (also found in Examples/Monocular).


**3. Verify the System**

Once both terminals are running:

The first terminal should show output from the sam_tracking node (e.g., feature extraction, tracking status).

The second terminal should be processing the TUM dataset and generating a 3D map or trajectory estimation.


# **Troubleshooting**
If you run into issues during installation or while running the system, try the following:

Ensure that you have correctly sourced the ROS 2 environment in each terminal before running any commands.

Double-check that the paths to ORBvoc.txt, TUM1.yaml, and the TUM dataset are correct.

If dependencies are missing, use rosdep to install missing ROS dependencies:

```
rosdep install --from-paths src --ignore-src -r -y
```

If any runtime errors occur, check that your system is correctly configured for the TUM dataset. Make sure your dataset directory (YOUR_DATASET_DIR) is set properly.

