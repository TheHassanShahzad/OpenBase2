// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openbase2_msgs:msg/EncoderData.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__BUILDER_HPP_
#define OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "openbase2_msgs/msg/detail/encoder_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace openbase2_msgs
{

namespace msg
{

namespace builder
{

class Init_EncoderData_left_encoder
{
public:
  explicit Init_EncoderData_left_encoder(::openbase2_msgs::msg::EncoderData & msg)
  : msg_(msg)
  {}
  ::openbase2_msgs::msg::EncoderData left_encoder(::openbase2_msgs::msg::EncoderData::_left_encoder_type arg)
  {
    msg_.left_encoder = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openbase2_msgs::msg::EncoderData msg_;
};

class Init_EncoderData_right_encoder
{
public:
  Init_EncoderData_right_encoder()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncoderData_left_encoder right_encoder(::openbase2_msgs::msg::EncoderData::_right_encoder_type arg)
  {
    msg_.right_encoder = std::move(arg);
    return Init_EncoderData_left_encoder(msg_);
  }

private:
  ::openbase2_msgs::msg::EncoderData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openbase2_msgs::msg::EncoderData>()
{
  return openbase2_msgs::msg::builder::Init_EncoderData_right_encoder();
}

}  // namespace openbase2_msgs

#endif  // OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__BUILDER_HPP_
