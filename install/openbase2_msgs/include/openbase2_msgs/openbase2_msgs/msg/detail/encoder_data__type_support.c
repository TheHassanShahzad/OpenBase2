// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from openbase2_msgs:msg/EncoderData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "openbase2_msgs/msg/detail/encoder_data__rosidl_typesupport_introspection_c.h"
#include "openbase2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "openbase2_msgs/msg/detail/encoder_data__functions.h"
#include "openbase2_msgs/msg/detail/encoder_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  openbase2_msgs__msg__EncoderData__init(message_memory);
}

void openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_fini_function(void * message_memory)
{
  openbase2_msgs__msg__EncoderData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_member_array[2] = {
  {
    "right_encoder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openbase2_msgs__msg__EncoderData, right_encoder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_encoder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(openbase2_msgs__msg__EncoderData, left_encoder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_members = {
  "openbase2_msgs__msg",  // message namespace
  "EncoderData",  // message name
  2,  // number of fields
  sizeof(openbase2_msgs__msg__EncoderData),
  openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_member_array,  // message members
  openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_init_function,  // function to initialize message memory (memory has to be allocated)
  openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_type_support_handle = {
  0,
  &openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_openbase2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, openbase2_msgs, msg, EncoderData)() {
  if (!openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_type_support_handle.typesupport_identifier) {
    openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &openbase2_msgs__msg__EncoderData__rosidl_typesupport_introspection_c__EncoderData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
