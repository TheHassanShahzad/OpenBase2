// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from openbase2_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__FUNCTIONS_H_
#define OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "openbase2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "openbase2_msgs/msg/detail/motor_vels__struct.h"

/// Initialize msg/MotorVels message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * openbase2_msgs__msg__MotorVels
 * )) before or use
 * openbase2_msgs__msg__MotorVels__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
bool
openbase2_msgs__msg__MotorVels__init(openbase2_msgs__msg__MotorVels * msg);

/// Finalize msg/MotorVels message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
void
openbase2_msgs__msg__MotorVels__fini(openbase2_msgs__msg__MotorVels * msg);

/// Create msg/MotorVels message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * openbase2_msgs__msg__MotorVels__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
openbase2_msgs__msg__MotorVels *
openbase2_msgs__msg__MotorVels__create();

/// Destroy msg/MotorVels message.
/**
 * It calls
 * openbase2_msgs__msg__MotorVels__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
void
openbase2_msgs__msg__MotorVels__destroy(openbase2_msgs__msg__MotorVels * msg);

/// Check for msg/MotorVels message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
bool
openbase2_msgs__msg__MotorVels__are_equal(const openbase2_msgs__msg__MotorVels * lhs, const openbase2_msgs__msg__MotorVels * rhs);

/// Copy a msg/MotorVels message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
bool
openbase2_msgs__msg__MotorVels__copy(
  const openbase2_msgs__msg__MotorVels * input,
  openbase2_msgs__msg__MotorVels * output);

/// Initialize array of msg/MotorVels messages.
/**
 * It allocates the memory for the number of elements and calls
 * openbase2_msgs__msg__MotorVels__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
bool
openbase2_msgs__msg__MotorVels__Sequence__init(openbase2_msgs__msg__MotorVels__Sequence * array, size_t size);

/// Finalize array of msg/MotorVels messages.
/**
 * It calls
 * openbase2_msgs__msg__MotorVels__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
void
openbase2_msgs__msg__MotorVels__Sequence__fini(openbase2_msgs__msg__MotorVels__Sequence * array);

/// Create array of msg/MotorVels messages.
/**
 * It allocates the memory for the array and calls
 * openbase2_msgs__msg__MotorVels__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
openbase2_msgs__msg__MotorVels__Sequence *
openbase2_msgs__msg__MotorVels__Sequence__create(size_t size);

/// Destroy array of msg/MotorVels messages.
/**
 * It calls
 * openbase2_msgs__msg__MotorVels__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
void
openbase2_msgs__msg__MotorVels__Sequence__destroy(openbase2_msgs__msg__MotorVels__Sequence * array);

/// Check for msg/MotorVels message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
bool
openbase2_msgs__msg__MotorVels__Sequence__are_equal(const openbase2_msgs__msg__MotorVels__Sequence * lhs, const openbase2_msgs__msg__MotorVels__Sequence * rhs);

/// Copy an array of msg/MotorVels messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_openbase2_msgs
bool
openbase2_msgs__msg__MotorVels__Sequence__copy(
  const openbase2_msgs__msg__MotorVels__Sequence * input,
  openbase2_msgs__msg__MotorVels__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__FUNCTIONS_H_
