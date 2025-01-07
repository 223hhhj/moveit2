// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grasping_msgs:msg/ObjectProperty.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__BUILDER_HPP_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__BUILDER_HPP_

#include "grasping_msgs/msg/detail/object_property__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace grasping_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectProperty_value
{
public:
  explicit Init_ObjectProperty_value(::grasping_msgs::msg::ObjectProperty & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::msg::ObjectProperty value(::grasping_msgs::msg::ObjectProperty::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::msg::ObjectProperty msg_;
};

class Init_ObjectProperty_name
{
public:
  Init_ObjectProperty_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectProperty_value name(::grasping_msgs::msg::ObjectProperty::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ObjectProperty_value(msg_);
  }

private:
  ::grasping_msgs::msg::ObjectProperty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::msg::ObjectProperty>()
{
  return grasping_msgs::msg::builder::Init_ObjectProperty_name();
}

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__BUILDER_HPP_
