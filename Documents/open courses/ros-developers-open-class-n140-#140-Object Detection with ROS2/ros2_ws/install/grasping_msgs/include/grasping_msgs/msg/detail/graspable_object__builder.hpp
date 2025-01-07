// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__BUILDER_HPP_
#define GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__BUILDER_HPP_

#include "grasping_msgs/msg/detail/graspable_object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace grasping_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspableObject_grasps
{
public:
  explicit Init_GraspableObject_grasps(::grasping_msgs::msg::GraspableObject & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::msg::GraspableObject grasps(::grasping_msgs::msg::GraspableObject::_grasps_type arg)
  {
    msg_.grasps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::msg::GraspableObject msg_;
};

class Init_GraspableObject_object
{
public:
  Init_GraspableObject_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspableObject_grasps object(::grasping_msgs::msg::GraspableObject::_object_type arg)
  {
    msg_.object = std::move(arg);
    return Init_GraspableObject_grasps(msg_);
  }

private:
  ::grasping_msgs::msg::GraspableObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::msg::GraspableObject>()
{
  return grasping_msgs::msg::builder::Init_GraspableObject_object();
}

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__BUILDER_HPP_
