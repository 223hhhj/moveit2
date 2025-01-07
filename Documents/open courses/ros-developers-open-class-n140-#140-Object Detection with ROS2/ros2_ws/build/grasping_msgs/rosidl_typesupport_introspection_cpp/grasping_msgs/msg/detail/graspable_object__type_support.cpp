// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "grasping_msgs/msg/detail/graspable_object__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GraspableObject_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::msg::GraspableObject(_init);
}

void GraspableObject_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::msg::GraspableObject *>(message_memory);
  typed_message->~GraspableObject();
}

size_t size_function__GraspableObject__grasps(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GraspableObject__grasps(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void * get_function__GraspableObject__grasps(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  return &member[index];
}

void resize_function__GraspableObject__grasps(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::Grasp> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GraspableObject_message_member_array[2] = {
  {
    "object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasping_msgs::msg::Object>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::msg::GraspableObject, object),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "grasps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::Grasp>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::msg::GraspableObject, grasps),  // bytes offset in struct
    nullptr,  // default value
    size_function__GraspableObject__grasps,  // size() function pointer
    get_const_function__GraspableObject__grasps,  // get_const(index) function pointer
    get_function__GraspableObject__grasps,  // get(index) function pointer
    resize_function__GraspableObject__grasps  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GraspableObject_message_members = {
  "grasping_msgs::msg",  // message namespace
  "GraspableObject",  // message name
  2,  // number of fields
  sizeof(grasping_msgs::msg::GraspableObject),
  GraspableObject_message_member_array,  // message members
  GraspableObject_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspableObject_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GraspableObject_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GraspableObject_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::msg::GraspableObject>()
{
  return &::grasping_msgs::msg::rosidl_typesupport_introspection_cpp::GraspableObject_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, msg, GraspableObject)() {
  return &::grasping_msgs::msg::rosidl_typesupport_introspection_cpp::GraspableObject_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
