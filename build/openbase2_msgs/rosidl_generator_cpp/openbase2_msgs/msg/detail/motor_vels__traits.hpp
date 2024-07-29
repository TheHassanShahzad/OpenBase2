// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from openbase2_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__TRAITS_HPP_
#define OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "openbase2_msgs/msg/detail/motor_vels__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace openbase2_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorVels & msg,
  std::ostream & out)
{
  out << "{";
  // member: right_pwm
  {
    out << "right_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_pwm, out);
    out << ", ";
  }

  // member: left_pwm
  {
    out << "left_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_pwm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorVels & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: right_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_pwm, out);
    out << "\n";
  }

  // member: left_pwm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_pwm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_pwm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorVels & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace openbase2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use openbase2_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const openbase2_msgs::msg::MotorVels & msg,
  std::ostream & out, size_t indentation = 0)
{
  openbase2_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use openbase2_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const openbase2_msgs::msg::MotorVels & msg)
{
  return openbase2_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<openbase2_msgs::msg::MotorVels>()
{
  return "openbase2_msgs::msg::MotorVels";
}

template<>
inline const char * name<openbase2_msgs::msg::MotorVels>()
{
  return "openbase2_msgs/msg/MotorVels";
}

template<>
struct has_fixed_size<openbase2_msgs::msg::MotorVels>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<openbase2_msgs::msg::MotorVels>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<openbase2_msgs::msg::MotorVels>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__TRAITS_HPP_
