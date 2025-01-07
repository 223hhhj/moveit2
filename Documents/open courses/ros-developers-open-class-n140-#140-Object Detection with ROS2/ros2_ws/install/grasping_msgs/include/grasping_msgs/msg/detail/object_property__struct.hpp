// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grasping_msgs:msg/ObjectProperty.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__STRUCT_HPP_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__grasping_msgs__msg__ObjectProperty __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__msg__ObjectProperty __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectProperty_
{
  using Type = ObjectProperty_<ContainerAllocator>;

  explicit ObjectProperty_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = "";
    }
  }

  explicit ObjectProperty_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    value(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _value_type value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::msg::ObjectProperty_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::msg::ObjectProperty_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::msg::ObjectProperty_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::msg::ObjectProperty_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__msg__ObjectProperty
    std::shared_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__msg__ObjectProperty
    std::shared_ptr<grasping_msgs::msg::ObjectProperty_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectProperty_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectProperty_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectProperty_

// alias to use template instance with default allocator
using ObjectProperty =
  grasping_msgs::msg::ObjectProperty_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__STRUCT_HPP_
