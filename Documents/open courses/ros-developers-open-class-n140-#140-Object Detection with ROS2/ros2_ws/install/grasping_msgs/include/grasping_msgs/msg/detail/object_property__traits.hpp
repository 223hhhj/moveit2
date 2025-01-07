// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grasping_msgs:msg/ObjectProperty.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__TRAITS_HPP_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__TRAITS_HPP_

#include "grasping_msgs/msg/detail/object_property__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::msg::ObjectProperty>()
{
  return "grasping_msgs::msg::ObjectProperty";
}

template<>
inline const char * name<grasping_msgs::msg::ObjectProperty>()
{
  return "grasping_msgs/msg/ObjectProperty";
}

template<>
struct has_fixed_size<grasping_msgs::msg::ObjectProperty>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grasping_msgs::msg::ObjectProperty>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grasping_msgs::msg::ObjectProperty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__TRAITS_HPP_
