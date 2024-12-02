// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dynorb_interface:srv/DynClass.idl
// generated code does not contain a copyright notice

#ifndef DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__STRUCT_H_
#define DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DynClass in the package dynorb_interface.
typedef struct dynorb_interface__srv__DynClass_Request
{
  int64_t x;
  int64_t y;
} dynorb_interface__srv__DynClass_Request;

// Struct for a sequence of dynorb_interface__srv__DynClass_Request.
typedef struct dynorb_interface__srv__DynClass_Request__Sequence
{
  dynorb_interface__srv__DynClass_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynorb_interface__srv__DynClass_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DynClass in the package dynorb_interface.
typedef struct dynorb_interface__srv__DynClass_Response
{
  int64_t cat;
} dynorb_interface__srv__DynClass_Response;

// Struct for a sequence of dynorb_interface__srv__DynClass_Response.
typedef struct dynorb_interface__srv__DynClass_Response__Sequence
{
  dynorb_interface__srv__DynClass_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dynorb_interface__srv__DynClass_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DYNORB_INTERFACE__SRV__DETAIL__DYN_CLASS__STRUCT_H_
