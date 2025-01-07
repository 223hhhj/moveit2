// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grasping_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include "grasping_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'point_cluster'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'surface'
#include "shape_msgs/msg/detail/plane__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::msg::Object>()
{
  return "grasping_msgs::msg::Object";
}

template<>
inline const char * name<grasping_msgs::msg::Object>()
{
  return "grasping_msgs/msg/Object";
}

template<>
struct has_fixed_size<grasping_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grasping_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grasping_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
