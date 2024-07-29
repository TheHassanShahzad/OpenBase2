// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from openbase2_msgs:msg/EncoderData.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__STRUCT_H_
#define OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EncoderData in the package openbase2_msgs.
typedef struct openbase2_msgs__msg__EncoderData
{
  int64_t right_encoder;
  int64_t left_encoder;
} openbase2_msgs__msg__EncoderData;

// Struct for a sequence of openbase2_msgs__msg__EncoderData.
typedef struct openbase2_msgs__msg__EncoderData__Sequence
{
  openbase2_msgs__msg__EncoderData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} openbase2_msgs__msg__EncoderData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__STRUCT_H_
