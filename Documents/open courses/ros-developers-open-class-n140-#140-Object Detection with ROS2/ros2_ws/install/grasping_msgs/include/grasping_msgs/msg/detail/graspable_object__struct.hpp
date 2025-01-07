// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__STRUCT_HPP_
#define GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'object'
#include "grasping_msgs/msg/detail/object__struct.hpp"
// Member 'grasps'
#include "moveit_msgs/msg/detail/grasp__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__msg__GraspableObject __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__msg__GraspableObject __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraspableObject_
{
  using Type = GraspableObject_<ContainerAllocator>;

  explicit GraspableObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_init)
  {
    (void)_init;
  }

  explicit GraspableObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_type =
    grasping_msgs::msg::Object_<ContainerAllocator>;
  _object_type object;
  using _grasps_type =
    std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename ContainerAllocator::template rebind<moveit_msgs::msg::Grasp_<ContainerAllocator>>::other>;
  _grasps_type grasps;

  // setters for named parameter idiom
  Type & set__object(
    const grasping_msgs::msg::Object_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }
  Type & set__grasps(
    const std::vector<moveit_msgs::msg::Grasp_<ContainerAllocator>, typename ContainerAllocator::template rebind<moveit_msgs::msg::Grasp_<ContainerAllocator>>::other> & _arg)
  {
    this->grasps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::msg::GraspableObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::msg::GraspableObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::msg::GraspableObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::msg::GraspableObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__msg__GraspableObject
    std::shared_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__msg__GraspableObject
    std::shared_ptr<grasping_msgs::msg::GraspableObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraspableObject_ & other) const
  {
    if (this->object != other.object) {
      return false;
    }
    if (this->grasps != other.grasps) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraspableObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraspableObject_

// alias to use template instance with default allocator
using GraspableObject =
  grasping_msgs::msg::GraspableObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__STRUCT_HPP_
