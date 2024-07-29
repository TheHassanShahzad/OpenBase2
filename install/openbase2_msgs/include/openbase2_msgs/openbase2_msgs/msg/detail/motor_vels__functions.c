// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from openbase2_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice
#include "openbase2_msgs/msg/detail/motor_vels__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
openbase2_msgs__msg__MotorVels__init(openbase2_msgs__msg__MotorVels * msg)
{
  if (!msg) {
    return false;
  }
  // right_pwm
  // left_pwm
  return true;
}

void
openbase2_msgs__msg__MotorVels__fini(openbase2_msgs__msg__MotorVels * msg)
{
  if (!msg) {
    return;
  }
  // right_pwm
  // left_pwm
}

bool
openbase2_msgs__msg__MotorVels__are_equal(const openbase2_msgs__msg__MotorVels * lhs, const openbase2_msgs__msg__MotorVels * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right_pwm
  if (lhs->right_pwm != rhs->right_pwm) {
    return false;
  }
  // left_pwm
  if (lhs->left_pwm != rhs->left_pwm) {
    return false;
  }
  return true;
}

bool
openbase2_msgs__msg__MotorVels__copy(
  const openbase2_msgs__msg__MotorVels * input,
  openbase2_msgs__msg__MotorVels * output)
{
  if (!input || !output) {
    return false;
  }
  // right_pwm
  output->right_pwm = input->right_pwm;
  // left_pwm
  output->left_pwm = input->left_pwm;
  return true;
}

openbase2_msgs__msg__MotorVels *
openbase2_msgs__msg__MotorVels__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openbase2_msgs__msg__MotorVels * msg = (openbase2_msgs__msg__MotorVels *)allocator.allocate(sizeof(openbase2_msgs__msg__MotorVels), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(openbase2_msgs__msg__MotorVels));
  bool success = openbase2_msgs__msg__MotorVels__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
openbase2_msgs__msg__MotorVels__destroy(openbase2_msgs__msg__MotorVels * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    openbase2_msgs__msg__MotorVels__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
openbase2_msgs__msg__MotorVels__Sequence__init(openbase2_msgs__msg__MotorVels__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openbase2_msgs__msg__MotorVels * data = NULL;

  if (size) {
    data = (openbase2_msgs__msg__MotorVels *)allocator.zero_allocate(size, sizeof(openbase2_msgs__msg__MotorVels), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = openbase2_msgs__msg__MotorVels__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        openbase2_msgs__msg__MotorVels__fini(&data[i - 1]);
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
openbase2_msgs__msg__MotorVels__Sequence__fini(openbase2_msgs__msg__MotorVels__Sequence * array)
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
      openbase2_msgs__msg__MotorVels__fini(&array->data[i]);
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

openbase2_msgs__msg__MotorVels__Sequence *
openbase2_msgs__msg__MotorVels__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  openbase2_msgs__msg__MotorVels__Sequence * array = (openbase2_msgs__msg__MotorVels__Sequence *)allocator.allocate(sizeof(openbase2_msgs__msg__MotorVels__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = openbase2_msgs__msg__MotorVels__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
openbase2_msgs__msg__MotorVels__Sequence__destroy(openbase2_msgs__msg__MotorVels__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    openbase2_msgs__msg__MotorVels__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
openbase2_msgs__msg__MotorVels__Sequence__are_equal(const openbase2_msgs__msg__MotorVels__Sequence * lhs, const openbase2_msgs__msg__MotorVels__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!openbase2_msgs__msg__MotorVels__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
openbase2_msgs__msg__MotorVels__Sequence__copy(
  const openbase2_msgs__msg__MotorVels__Sequence * input,
  openbase2_msgs__msg__MotorVels__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(openbase2_msgs__msg__MotorVels);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    openbase2_msgs__msg__MotorVels * data =
      (openbase2_msgs__msg__MotorVels *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!openbase2_msgs__msg__MotorVels__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          openbase2_msgs__msg__MotorVels__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!openbase2_msgs__msg__MotorVels__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
