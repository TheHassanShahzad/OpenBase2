// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openbase2_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__STRUCT_H_
#define OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MotorVels in the package openbase2_msgs.
typedef struct openbase2_msgs__msg__MotorVels
{
  int16_t right_pwm;
  int16_t left_pwm;
} openbase2_msgs__msg__MotorVels;

// Struct for a sequence of openbase2_msgs__msg__MotorVels.
typedef struct openbase2_msgs__msg__MotorVels__Sequence
{
  openbase2_msgs__msg__MotorVels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openbase2_msgs__msg__MotorVels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__STRUCT_H_
