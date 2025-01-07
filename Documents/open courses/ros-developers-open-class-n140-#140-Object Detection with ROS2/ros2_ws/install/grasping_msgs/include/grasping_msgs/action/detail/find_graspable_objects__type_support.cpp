// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from grasping_msgs:action/FindGraspableObjects.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_Goal(_init);
}

void FindGraspableObjects_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_Goal *>(message_memory);
  typed_message->~FindGraspableObjects_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_Goal_message_member_array[1] = {
  {
    "plan_grasps",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_Goal, plan_grasps),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_Goal_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_Goal",  // message name
  1,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_Goal),
  FindGraspableObjects_Goal_message_member_array,  // message members
  FindGraspableObjects_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_Goal>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_Goal)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_Result(_init);
}

void FindGraspableObjects_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_Result *>(message_memory);
  typed_message->~FindGraspableObjects_Result();
}

size_t size_function__FindGraspableObjects_Result__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<grasping_msgs::msg::GraspableObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FindGraspableObjects_Result__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<grasping_msgs::msg::GraspableObject> *>(untyped_member);
  return &member[index];
}

void * get_function__FindGraspableObjects_Result__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<grasping_msgs::msg::GraspableObject> *>(untyped_member);
  return &member[index];
}

void resize_function__FindGraspableObjects_Result__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<grasping_msgs::msg::GraspableObject> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FindGraspableObjects_Result__support_surfaces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<grasping_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FindGraspableObjects_Result__support_surfaces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<grasping_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__FindGraspableObjects_Result__support_surfaces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<grasping_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void resize_function__FindGraspableObjects_Result__support_surfaces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<grasping_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_Result_message_member_array[2] = {
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasping_msgs::msg::GraspableObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_Result, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__FindGraspableObjects_Result__objects,  // size() function pointer
    get_const_function__FindGraspableObjects_Result__objects,  // get_const(index) function pointer
    get_function__FindGraspableObjects_Result__objects,  // get(index) function pointer
    resize_function__FindGraspableObjects_Result__objects  // resize(index) function pointer
  },
  {
    "support_surfaces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasping_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_Result, support_surfaces),  // bytes offset in struct
    nullptr,  // default value
    size_function__FindGraspableObjects_Result__support_surfaces,  // size() function pointer
    get_const_function__FindGraspableObjects_Result__support_surfaces,  // get_const(index) function pointer
    get_function__FindGraspableObjects_Result__support_surfaces,  // get(index) function pointer
    resize_function__FindGraspableObjects_Result__support_surfaces  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_Result_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_Result",  // message name
  2,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_Result),
  FindGraspableObjects_Result_message_member_array,  // message members
  FindGraspableObjects_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_Result>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_Result)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_Feedback(_init);
}

void FindGraspableObjects_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_Feedback *>(message_memory);
  typed_message->~FindGraspableObjects_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_Feedback_message_member_array[1] = {
  {
    "object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasping_msgs::msg::GraspableObject>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_Feedback, object),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_Feedback_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_Feedback",  // message name
  1,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_Feedback),
  FindGraspableObjects_Feedback_message_member_array,  // message members
  FindGraspableObjects_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_Feedback>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_Feedback)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_SendGoal_Request(_init);
}

void FindGraspableObjects_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_SendGoal_Request *>(message_memory);
  typed_message->~FindGraspableObjects_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_SendGoal_Request_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_SendGoal_Request),
  FindGraspableObjects_SendGoal_Request_message_member_array,  // message members
  FindGraspableObjects_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_SendGoal_Request>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_SendGoal_Response(_init);
}

void FindGraspableObjects_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_SendGoal_Response *>(message_memory);
  typed_message->~FindGraspableObjects_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_SendGoal_Response_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_SendGoal_Response),
  FindGraspableObjects_SendGoal_Response_message_member_array,  // message members
  FindGraspableObjects_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_SendGoal_Response>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FindGraspableObjects_SendGoal_service_members = {
  "grasping_msgs::action",  // service namespace
  "FindGraspableObjects_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<grasping_msgs::action::FindGraspableObjects_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FindGraspableObjects_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<grasping_msgs::action::FindGraspableObjects_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grasping_msgs::action::FindGraspableObjects_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grasping_msgs::action::FindGraspableObjects_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<grasping_msgs::action::FindGraspableObjects_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_GetResult_Request(_init);
}

void FindGraspableObjects_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_GetResult_Request *>(message_memory);
  typed_message->~FindGraspableObjects_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_GetResult_Request_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_GetResult_Request),
  FindGraspableObjects_GetResult_Request_message_member_array,  // message members
  FindGraspableObjects_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_GetResult_Request>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_GetResult_Request)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_GetResult_Response(_init);
}

void FindGraspableObjects_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_GetResult_Response *>(message_memory);
  typed_message->~FindGraspableObjects_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_GetResult_Response_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_GetResult_Response),
  FindGraspableObjects_GetResult_Response_message_member_array,  // message members
  FindGraspableObjects_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_GetResult_Response>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_GetResult_Response)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers FindGraspableObjects_GetResult_service_members = {
  "grasping_msgs::action",  // service namespace
  "FindGraspableObjects_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<grasping_msgs::action::FindGraspableObjects_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t FindGraspableObjects_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<grasping_msgs::action::FindGraspableObjects_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grasping_msgs::action::FindGraspableObjects_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::grasping_msgs::action::FindGraspableObjects_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<grasping_msgs::action::FindGraspableObjects_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void FindGraspableObjects_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) grasping_msgs::action::FindGraspableObjects_FeedbackMessage(_init);
}

void FindGraspableObjects_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<grasping_msgs::action::FindGraspableObjects_FeedbackMessage *>(message_memory);
  typed_message->~FindGraspableObjects_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FindGraspableObjects_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs::action::FindGraspableObjects_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FindGraspableObjects_FeedbackMessage_message_members = {
  "grasping_msgs::action",  // message namespace
  "FindGraspableObjects_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(grasping_msgs::action::FindGraspableObjects_FeedbackMessage),
  FindGraspableObjects_FeedbackMessage_message_member_array,  // message members
  FindGraspableObjects_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FindGraspableObjects_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FindGraspableObjects_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace grasping_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::FindGraspableObjects_FeedbackMessage>()
{
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, FindGraspableObjects_FeedbackMessage)() {
  return &::grasping_msgs::action::rosidl_typesupport_introspection_cpp::FindGraspableObjects_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
