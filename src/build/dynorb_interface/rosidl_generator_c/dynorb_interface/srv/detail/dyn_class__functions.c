// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from dynorb_interface:srv/DynClass.idl
// generated code does not contain a copyright notice
#include "dynorb_interface/srv/detail/dyn_class__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
dynorb_interface__srv__DynClass_Request__init(dynorb_interface__srv__DynClass_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
dynorb_interface__srv__DynClass_Request__fini(dynorb_interface__srv__DynClass_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
dynorb_interface__srv__DynClass_Request__are_equal(const dynorb_interface__srv__DynClass_Request * lhs, const dynorb_interface__srv__DynClass_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
dynorb_interface__srv__DynClass_Request__copy(
  const dynorb_interface__srv__DynClass_Request * input,
  dynorb_interface__srv__DynClass_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

dynorb_interface__srv__DynClass_Request *
dynorb_interface__srv__DynClass_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__DynClass_Request * msg = (dynorb_interface__srv__DynClass_Request *)allocator.allocate(sizeof(dynorb_interface__srv__DynClass_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynorb_interface__srv__DynClass_Request));
  bool success = dynorb_interface__srv__DynClass_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynorb_interface__srv__DynClass_Request__destroy(dynorb_interface__srv__DynClass_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynorb_interface__srv__DynClass_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynorb_interface__srv__DynClass_Request__Sequence__init(dynorb_interface__srv__DynClass_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__DynClass_Request * data = NULL;

  if (size) {
    data = (dynorb_interface__srv__DynClass_Request *)allocator.zero_allocate(size, sizeof(dynorb_interface__srv__DynClass_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynorb_interface__srv__DynClass_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynorb_interface__srv__DynClass_Request__fini(&data[i - 1]);
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
dynorb_interface__srv__DynClass_Request__Sequence__fini(dynorb_interface__srv__DynClass_Request__Sequence * array)
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
      dynorb_interface__srv__DynClass_Request__fini(&array->data[i]);
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

dynorb_interface__srv__DynClass_Request__Sequence *
dynorb_interface__srv__DynClass_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__DynClass_Request__Sequence * array = (dynorb_interface__srv__DynClass_Request__Sequence *)allocator.allocate(sizeof(dynorb_interface__srv__DynClass_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynorb_interface__srv__DynClass_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynorb_interface__srv__DynClass_Request__Sequence__destroy(dynorb_interface__srv__DynClass_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynorb_interface__srv__DynClass_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynorb_interface__srv__DynClass_Request__Sequence__are_equal(const dynorb_interface__srv__DynClass_Request__Sequence * lhs, const dynorb_interface__srv__DynClass_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynorb_interface__srv__DynClass_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynorb_interface__srv__DynClass_Request__Sequence__copy(
  const dynorb_interface__srv__DynClass_Request__Sequence * input,
  dynorb_interface__srv__DynClass_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynorb_interface__srv__DynClass_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynorb_interface__srv__DynClass_Request * data =
      (dynorb_interface__srv__DynClass_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynorb_interface__srv__DynClass_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynorb_interface__srv__DynClass_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynorb_interface__srv__DynClass_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
dynorb_interface__srv__DynClass_Response__init(dynorb_interface__srv__DynClass_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cat
  return true;
}

void
dynorb_interface__srv__DynClass_Response__fini(dynorb_interface__srv__DynClass_Response * msg)
{
  if (!msg) {
    return;
  }
  // cat
}

bool
dynorb_interface__srv__DynClass_Response__are_equal(const dynorb_interface__srv__DynClass_Response * lhs, const dynorb_interface__srv__DynClass_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cat
  if (lhs->cat != rhs->cat) {
    return false;
  }
  return true;
}

bool
dynorb_interface__srv__DynClass_Response__copy(
  const dynorb_interface__srv__DynClass_Response * input,
  dynorb_interface__srv__DynClass_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cat
  output->cat = input->cat;
  return true;
}

dynorb_interface__srv__DynClass_Response *
dynorb_interface__srv__DynClass_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__DynClass_Response * msg = (dynorb_interface__srv__DynClass_Response *)allocator.allocate(sizeof(dynorb_interface__srv__DynClass_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(dynorb_interface__srv__DynClass_Response));
  bool success = dynorb_interface__srv__DynClass_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
dynorb_interface__srv__DynClass_Response__destroy(dynorb_interface__srv__DynClass_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    dynorb_interface__srv__DynClass_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
dynorb_interface__srv__DynClass_Response__Sequence__init(dynorb_interface__srv__DynClass_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__DynClass_Response * data = NULL;

  if (size) {
    data = (dynorb_interface__srv__DynClass_Response *)allocator.zero_allocate(size, sizeof(dynorb_interface__srv__DynClass_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = dynorb_interface__srv__DynClass_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        dynorb_interface__srv__DynClass_Response__fini(&data[i - 1]);
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
dynorb_interface__srv__DynClass_Response__Sequence__fini(dynorb_interface__srv__DynClass_Response__Sequence * array)
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
      dynorb_interface__srv__DynClass_Response__fini(&array->data[i]);
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

dynorb_interface__srv__DynClass_Response__Sequence *
dynorb_interface__srv__DynClass_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  dynorb_interface__srv__DynClass_Response__Sequence * array = (dynorb_interface__srv__DynClass_Response__Sequence *)allocator.allocate(sizeof(dynorb_interface__srv__DynClass_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = dynorb_interface__srv__DynClass_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
dynorb_interface__srv__DynClass_Response__Sequence__destroy(dynorb_interface__srv__DynClass_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    dynorb_interface__srv__DynClass_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
dynorb_interface__srv__DynClass_Response__Sequence__are_equal(const dynorb_interface__srv__DynClass_Response__Sequence * lhs, const dynorb_interface__srv__DynClass_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!dynorb_interface__srv__DynClass_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
dynorb_interface__srv__DynClass_Response__Sequence__copy(
  const dynorb_interface__srv__DynClass_Response__Sequence * input,
  dynorb_interface__srv__DynClass_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(dynorb_interface__srv__DynClass_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    dynorb_interface__srv__DynClass_Response * data =
      (dynorb_interface__srv__DynClass_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!dynorb_interface__srv__DynClass_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          dynorb_interface__srv__DynClass_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!dynorb_interface__srv__DynClass_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
