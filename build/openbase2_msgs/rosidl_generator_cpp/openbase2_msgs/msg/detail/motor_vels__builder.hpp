// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from openbase2_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__BUILDER_HPP_
#define OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "openbase2_msgs/msg/detail/motor_vels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace openbase2_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorVels_left_pwm
{
public:
  explicit Init_MotorVels_left_pwm(::openbase2_msgs::msg::MotorVels & msg)
  : msg_(msg)
  {}
  ::openbase2_msgs::msg::MotorVels left_pwm(::openbase2_msgs::msg::MotorVels::_left_pwm_type arg)
  {
    msg_.left_pwm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::openbase2_msgs::msg::MotorVels msg_;
};

class Init_MotorVels_right_pwm
{
public:
  Init_MotorVels_right_pwm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorVels_left_pwm right_pwm(::openbase2_msgs::msg::MotorVels::_right_pwm_type arg)
  {
    msg_.right_pwm = std::move(arg);
    return Init_MotorVels_left_pwm(msg_);
  }

private:
  ::openbase2_msgs::msg::MotorVels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::openbase2_msgs::msg::MotorVels>()
{
  return openbase2_msgs::msg::builder::Init_MotorVels_right_pwm();
}

}  // namespace openbase2_msgs

#endif  // OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__BUILDER_HPP_
