// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice
#include "interfaces/msg/detail/yolo_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
interfaces__msg__YoloDetection__init(interfaces__msg__YoloDetection * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // w
  // h
  // conf
  // x1
  // y1
  // conf1
  // x2
  // y2
  // conf2
  // x3
  // y3
  // conf3
  return true;
}

void
interfaces__msg__YoloDetection__fini(interfaces__msg__YoloDetection * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // w
  // h
  // conf
  // x1
  // y1
  // conf1
  // x2
  // y2
  // conf2
  // x3
  // y3
  // conf3
}

bool
interfaces__msg__YoloDetection__are_equal(const interfaces__msg__YoloDetection * lhs, const interfaces__msg__YoloDetection * rhs)
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
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // h
  if (lhs->h != rhs->h) {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // conf1
  if (lhs->conf1 != rhs->conf1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  // conf2
  if (lhs->conf2 != rhs->conf2) {
    return false;
  }
  // x3
  if (lhs->x3 != rhs->x3) {
    return false;
  }
  // y3
  if (lhs->y3 != rhs->y3) {
    return false;
  }
  // conf3
  if (lhs->conf3 != rhs->conf3) {
    return false;
  }
  return true;
}

bool
interfaces__msg__YoloDetection__copy(
  const interfaces__msg__YoloDetection * input,
  interfaces__msg__YoloDetection * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // w
  output->w = input->w;
  // h
  output->h = input->h;
  // conf
  output->conf = input->conf;
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // conf1
  output->conf1 = input->conf1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  // conf2
  output->conf2 = input->conf2;
  // x3
  output->x3 = input->x3;
  // y3
  output->y3 = input->y3;
  // conf3
  output->conf3 = input->conf3;
  return true;
}

interfaces__msg__YoloDetection *
interfaces__msg__YoloDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__YoloDetection * msg = (interfaces__msg__YoloDetection *)allocator.allocate(sizeof(interfaces__msg__YoloDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces__msg__YoloDetection));
  bool success = interfaces__msg__YoloDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces__msg__YoloDetection__destroy(interfaces__msg__YoloDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces__msg__YoloDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces__msg__YoloDetection__Sequence__init(interfaces__msg__YoloDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__YoloDetection * data = NULL;

  if (size) {
    data = (interfaces__msg__YoloDetection *)allocator.zero_allocate(size, sizeof(interfaces__msg__YoloDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces__msg__YoloDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces__msg__YoloDetection__fini(&data[i - 1]);
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
interfaces__msg__YoloDetection__Sequence__fini(interfaces__msg__YoloDetection__Sequence * array)
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
      interfaces__msg__YoloDetection__fini(&array->data[i]);
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

interfaces__msg__YoloDetection__Sequence *
interfaces__msg__YoloDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces__msg__YoloDetection__Sequence * array = (interfaces__msg__YoloDetection__Sequence *)allocator.allocate(sizeof(interfaces__msg__YoloDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces__msg__YoloDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces__msg__YoloDetection__Sequence__destroy(interfaces__msg__YoloDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces__msg__YoloDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces__msg__YoloDetection__Sequence__are_equal(const interfaces__msg__YoloDetection__Sequence * lhs, const interfaces__msg__YoloDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces__msg__YoloDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces__msg__YoloDetection__Sequence__copy(
  const interfaces__msg__YoloDetection__Sequence * input,
  interfaces__msg__YoloDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces__msg__YoloDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces__msg__YoloDetection * data =
      (interfaces__msg__YoloDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces__msg__YoloDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces__msg__YoloDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces__msg__YoloDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
