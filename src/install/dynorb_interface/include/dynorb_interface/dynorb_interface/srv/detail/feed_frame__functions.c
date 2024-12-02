// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynorb_interface:srv/FeedFrame.idl
// generated code does not contain a copyright notice
#include "dynorb_interface/srv/detail/feed_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `frame`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
dynorb_interface__srv__FeedFrame_Request__init(dynorb_interface__srv__FeedFrame_Request * msg)
{
  if (!msg) {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__init(&msg->frame)) {
    dynorb_interface__srv__FeedFrame_Request__fini(msg);
    return false;
  }
  return true;
}

void
dynorb_interface__srv__FeedFrame_Request__fini(dynorb_interface__srv__FeedFrame_Request * msg)
{
  if (!msg) {
    return;
  }
  // frame
  sensor_msgs__msg__Image__fini(&msg->frame);
}

bool
dynorb_interface__srv__FeedFrame_Request__are_equal(const dynorb_interface__srv__FeedFrame_Request * lhs, const dynorb_interface__srv__FeedFrame_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->frame), &(rhs->frame)))
  {
    return false;
  }
  return true;
}

bool
dynorb_interface__srv__FeedFrame_Request__copy(
  const dynorb_interface__srv__FeedFrame_Request * input,
  dynorb_interface__srv__FeedFrame_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // frame
  if (!sensor_msgs__msg__Image__copy(
      &(input->frame), &(output->frame)))
  {
    return false;
  }
  return true;
}

dynorb_interface__srv__FeedFrame_Request *
dynorb_interface__srv__FeedFrame_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__FeedFrame_Request * msg = (dynorb_interface__srv__FeedFrame_Request *)allocator.allocate(sizeof(dynorb_interface__srv__FeedFrame_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynorb_interface__srv__FeedFrame_Request));
  bool success = dynorb_interface__srv__FeedFrame_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynorb_interface__srv__FeedFrame_Request__destroy(dynorb_interface__srv__FeedFrame_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynorb_interface__srv__FeedFrame_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynorb_interface__srv__FeedFrame_Request__Sequence__init(dynorb_interface__srv__FeedFrame_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__FeedFrame_Request * data = NULL;

  if (size) {
    data = (dynorb_interface__srv__FeedFrame_Request *)allocator.zero_allocate(size, sizeof(dynorb_interface__srv__FeedFrame_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynorb_interface__srv__FeedFrame_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynorb_interface__srv__FeedFrame_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynorb_interface__srv__FeedFrame_Request__Sequence__fini(dynorb_interface__srv__FeedFrame_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynorb_interface__srv__FeedFrame_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynorb_interface__srv__FeedFrame_Request__Sequence *
dynorb_interface__srv__FeedFrame_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__FeedFrame_Request__Sequence * array = (dynorb_interface__srv__FeedFrame_Request__Sequence *)allocator.allocate(sizeof(dynorb_interface__srv__FeedFrame_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynorb_interface__srv__FeedFrame_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynorb_interface__srv__FeedFrame_Request__Sequence__destroy(dynorb_interface__srv__FeedFrame_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynorb_interface__srv__FeedFrame_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynorb_interface__srv__FeedFrame_Request__Sequence__are_equal(const dynorb_interface__srv__FeedFrame_Request__Sequence * lhs, const dynorb_interface__srv__FeedFrame_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynorb_interface__srv__FeedFrame_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynorb_interface__srv__FeedFrame_Request__Sequence__copy(
  const dynorb_interface__srv__FeedFrame_Request__Sequence * input,
  dynorb_interface__srv__FeedFrame_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynorb_interface__srv__FeedFrame_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynorb_interface__srv__FeedFrame_Request * data =
      (dynorb_interface__srv__FeedFrame_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynorb_interface__srv__FeedFrame_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynorb_interface__srv__FeedFrame_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynorb_interface__srv__FeedFrame_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `seg`
// already included above
// #include "sensor_msgs/msg/detail/image__functions.h"

bool
dynorb_interface__srv__FeedFrame_Response__init(dynorb_interface__srv__FeedFrame_Response * msg)
{
  if (!msg) {
    return false;
  }
  // seg
  if (!sensor_msgs__msg__Image__init(&msg->seg)) {
    dynorb_interface__srv__FeedFrame_Response__fini(msg);
    return false;
  }
  return true;
}

void
dynorb_interface__srv__FeedFrame_Response__fini(dynorb_interface__srv__FeedFrame_Response * msg)
{
  if (!msg) {
    return;
  }
  // seg
  sensor_msgs__msg__Image__fini(&msg->seg);
}

bool
dynorb_interface__srv__FeedFrame_Response__are_equal(const dynorb_interface__srv__FeedFrame_Response * lhs, const dynorb_interface__srv__FeedFrame_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // seg
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->seg), &(rhs->seg)))
  {
    return false;
  }
  return true;
}

bool
dynorb_interface__srv__FeedFrame_Response__copy(
  const dynorb_interface__srv__FeedFrame_Response * input,
  dynorb_interface__srv__FeedFrame_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // seg
  if (!sensor_msgs__msg__Image__copy(
      &(input->seg), &(output->seg)))
  {
    return false;
  }
  return true;
}

dynorb_interface__srv__FeedFrame_Response *
dynorb_interface__srv__FeedFrame_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__FeedFrame_Response * msg = (dynorb_interface__srv__FeedFrame_Response *)allocator.allocate(sizeof(dynorb_interface__srv__FeedFrame_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynorb_interface__srv__FeedFrame_Response));
  bool success = dynorb_interface__srv__FeedFrame_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynorb_interface__srv__FeedFrame_Response__destroy(dynorb_interface__srv__FeedFrame_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynorb_interface__srv__FeedFrame_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynorb_interface__srv__FeedFrame_Response__Sequence__init(dynorb_interface__srv__FeedFrame_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__FeedFrame_Response * data = NULL;

  if (size) {
    data = (dynorb_interface__srv__FeedFrame_Response *)allocator.zero_allocate(size, sizeof(dynorb_interface__srv__FeedFrame_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynorb_interface__srv__FeedFrame_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynorb_interface__srv__FeedFrame_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
dynorb_interface__srv__FeedFrame_Response__Sequence__fini(dynorb_interface__srv__FeedFrame_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      dynorb_interface__srv__FeedFrame_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

dynorb_interface__srv__FeedFrame_Response__Sequence *
dynorb_interface__srv__FeedFrame_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__FeedFrame_Response__Sequence * array = (dynorb_interface__srv__FeedFrame_Response__Sequence *)allocator.allocate(sizeof(dynorb_interface__srv__FeedFrame_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynorb_interface__srv__FeedFrame_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynorb_interface__srv__FeedFrame_Response__Sequence__destroy(dynorb_interface__srv__FeedFrame_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynorb_interface__srv__FeedFrame_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynorb_interface__srv__FeedFrame_Response__Sequence__are_equal(const dynorb_interface__srv__FeedFrame_Response__Sequence * lhs, const dynorb_interface__srv__FeedFrame_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynorb_interface__srv__FeedFrame_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynorb_interface__srv__FeedFrame_Response__Sequence__copy(
  const dynorb_interface__srv__FeedFrame_Response__Sequence * input,
  dynorb_interface__srv__FeedFrame_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynorb_interface__srv__FeedFrame_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynorb_interface__srv__FeedFrame_Response * data =
      (dynorb_interface__srv__FeedFrame_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynorb_interface__srv__FeedFrame_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynorb_interface__srv__FeedFrame_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynorb_interface__srv__FeedFrame_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
