// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from openbase2_msgs:msg/EncoderData.idl
// generated code does not contain a copyright notice
#include "openbase2_msgs/msg/detail/encoder_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "openbase2_msgs/msg/detail/encoder_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace openbase2_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openbase2_msgs
cdr_serialize(
  const openbase2_msgs::msg::EncoderData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: right_encoder
  cdr << ros_message.right_encoder;
  // Member: left_encoder
  cdr << ros_message.left_encoder;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openbase2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  openbase2_msgs::msg::EncoderData & ros_message)
{
  // Member: right_encoder
  cdr >> ros_message.right_encoder;

  // Member: left_encoder
  cdr >> ros_message.left_encoder;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openbase2_msgs
get_serialized_size(
  const openbase2_msgs::msg::EncoderData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: right_encoder
  {
    size_t item_size = sizeof(ros_message.right_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_encoder
  {
    size_t item_size = sizeof(ros_message.left_encoder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_openbase2_msgs
max_serialized_size_EncoderData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: right_encoder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: left_encoder
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = openbase2_msgs::msg::EncoderData;
    is_plain =
      (
      offsetof(DataType, left_encoder) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EncoderData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const openbase2_msgs::msg::EncoderData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EncoderData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<openbase2_msgs::msg::EncoderData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EncoderData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const openbase2_msgs::msg::EncoderData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EncoderData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EncoderData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EncoderData__callbacks = {
  "openbase2_msgs::msg",
  "EncoderData",
  _EncoderData__cdr_serialize,
  _EncoderData__cdr_deserialize,
  _EncoderData__get_serialized_size,
  _EncoderData__max_serialized_size
};

static rosidl_message_type_support_t _EncoderData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EncoderData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace openbase2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_openbase2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<openbase2_msgs::msg::EncoderData>()
{
  return &openbase2_msgs::msg::typesupport_fastrtps_cpp::_EncoderData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, openbase2_msgs, msg, EncoderData)() {
  return &openbase2_msgs::msg::typesupport_fastrtps_cpp::_EncoderData__handle;
}

#ifdef __cplusplus
}
#endif
