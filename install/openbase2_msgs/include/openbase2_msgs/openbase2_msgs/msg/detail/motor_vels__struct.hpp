// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openbase2_msgs:msg/MotorVels.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__STRUCT_HPP_
#define OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__openbase2_msgs__msg__MotorVels __attribute__((deprecated))
#else
# define DEPRECATED__openbase2_msgs__msg__MotorVels __declspec(deprecated)
#endif

namespace openbase2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorVels_
{
  using Type = MotorVels_<ContainerAllocator>;

  explicit MotorVels_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_pwm = 0;
      this->left_pwm = 0;
    }
  }

  explicit MotorVels_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_pwm = 0;
      this->left_pwm = 0;
    }
  }

  // field types and members
  using _right_pwm_type =
    int16_t;
  _right_pwm_type right_pwm;
  using _left_pwm_type =
    int16_t;
  _left_pwm_type left_pwm;

  // setters for named parameter idiom
  Type & set__right_pwm(
    const int16_t & _arg)
  {
    this->right_pwm = _arg;
    return *this;
  }
  Type & set__left_pwm(
    const int16_t & _arg)
  {
    this->left_pwm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openbase2_msgs::msg::MotorVels_<ContainerAllocator> *;
  using ConstRawPtr =
    const openbase2_msgs::msg::MotorVels_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openbase2_msgs::msg::MotorVels_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openbase2_msgs::msg::MotorVels_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openbase2_msgs__msg__MotorVels
    std::shared_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openbase2_msgs__msg__MotorVels
    std::shared_ptr<openbase2_msgs::msg::MotorVels_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorVels_ & other) const
  {
    if (this->right_pwm != other.right_pwm) {
      return false;
    }
    if (this->left_pwm != other.left_pwm) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorVels_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorVels_

// alias to use template instance with default allocator
using MotorVels =
  openbase2_msgs::msg::MotorVels_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openbase2_msgs

#endif  // OPENBASE2_MSGS__MSG__DETAIL__MOTOR_VELS__STRUCT_HPP_
