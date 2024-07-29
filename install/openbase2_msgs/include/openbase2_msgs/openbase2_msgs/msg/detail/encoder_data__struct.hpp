// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from openbase2_msgs:msg/EncoderData.idl
// generated code does not contain a copyright notice

#ifndef OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__STRUCT_HPP_
#define OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__openbase2_msgs__msg__EncoderData __attribute__((deprecated))
#else
# define DEPRECATED__openbase2_msgs__msg__EncoderData __declspec(deprecated)
#endif

namespace openbase2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncoderData_
{
  using Type = EncoderData_<ContainerAllocator>;

  explicit EncoderData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_encoder = 0ll;
      this->left_encoder = 0ll;
    }
  }

  explicit EncoderData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->right_encoder = 0ll;
      this->left_encoder = 0ll;
    }
  }

  // field types and members
  using _right_encoder_type =
    int64_t;
  _right_encoder_type right_encoder;
  using _left_encoder_type =
    int64_t;
  _left_encoder_type left_encoder;

  // setters for named parameter idiom
  Type & set__right_encoder(
    const int64_t & _arg)
  {
    this->right_encoder = _arg;
    return *this;
  }
  Type & set__left_encoder(
    const int64_t & _arg)
  {
    this->left_encoder = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    openbase2_msgs::msg::EncoderData_<ContainerAllocator> *;
  using ConstRawPtr =
    const openbase2_msgs::msg::EncoderData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      openbase2_msgs::msg::EncoderData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      openbase2_msgs::msg::EncoderData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__openbase2_msgs__msg__EncoderData
    std::shared_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__openbase2_msgs__msg__EncoderData
    std::shared_ptr<openbase2_msgs::msg::EncoderData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncoderData_ & other) const
  {
    if (this->right_encoder != other.right_encoder) {
      return false;
    }
    if (this->left_encoder != other.left_encoder) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncoderData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncoderData_

// alias to use template instance with default allocator
using EncoderData =
  openbase2_msgs::msg::EncoderData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace openbase2_msgs

#endif  // OPENBASE2_MSGS__MSG__DETAIL__ENCODER_DATA__STRUCT_HPP_
