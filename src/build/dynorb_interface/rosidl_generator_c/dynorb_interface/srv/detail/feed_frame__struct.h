// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynorb_interface:srv/FeedFrame.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__STRUCT_H_
#define DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/FeedFrame in the package dynorb_interface.
typedef struct dynorb_interface__srv__FeedFrame_Request
{
  sensor_msgs__msg__Image frame;
} dynorb_interface__srv__FeedFrame_Request;

// Struct for a sequence of dynorb_interface__srv__FeedFrame_Request.
typedef struct dynorb_interface__srv__FeedFrame_Request__Sequence
{
  dynorb_interface__srv__FeedFrame_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynorb_interface__srv__FeedFrame_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'seg'
// already included above
// #include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/FeedFrame in the package dynorb_interface.
typedef struct dynorb_interface__srv__FeedFrame_Response
{
  sensor_msgs__msg__Image seg;
} dynorb_interface__srv__FeedFrame_Response;

// Struct for a sequence of dynorb_interface__srv__FeedFrame_Response.
typedef struct dynorb_interface__srv__FeedFrame_Response__Sequence
{
  dynorb_interface__srv__FeedFrame_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynorb_interface__srv__FeedFrame_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNORB_INTERFACE__SRV__DETAIL__FEED_FRAME__STRUCT_H_
