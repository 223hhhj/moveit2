// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "grasping_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "grasping_msgs/msg/detail/graspable_object__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace grasping_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
cdr_serialize(
  const grasping_msgs::msg::GraspableObject & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  grasping_msgs::msg::GraspableObject & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
get_serialized_size(
  const grasping_msgs::msg::GraspableObject & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
max_serialized_size_GraspableObject(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, msg, GraspableObject)();

#ifdef __cplusplus
}
#endif

#endif  // GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
