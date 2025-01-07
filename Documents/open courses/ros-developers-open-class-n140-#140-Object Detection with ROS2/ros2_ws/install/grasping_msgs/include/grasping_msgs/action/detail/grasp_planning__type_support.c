// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasping_msgs:action/GraspPlanning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
#include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasping_msgs/action/detail/grasp_planning__functions.h"
#include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `object`
#include "grasping_msgs/msg/object.h"
// Member `object`
#include "grasping_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_Goal__init(message_memory);
}

void GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_member_array[2] = {
  {
    "object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_Goal, object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_Goal, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_Goal",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_Goal),
  GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_member_array,  // message members
  GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_type_support_handle = {
  0,
  &GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_Goal)() {
  GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, Object)();
  if (!GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_Goal__rosidl_typesupport_introspection_c__GraspPlanning_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `grasps`
#include "moveit_msgs/msg/grasp.h"
// Member `grasps`
#include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_Result__init(message_memory);
}

void GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_Result__fini(message_memory);
}

size_t GraspPlanning_Result__rosidl_typesupport_introspection_c__size_function__Grasp__grasps(
  const void * untyped_member)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return member->size;
}

const void * GraspPlanning_Result__rosidl_typesupport_introspection_c__get_const_function__Grasp__grasps(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GraspPlanning_Result__rosidl_typesupport_introspection_c__get_function__Grasp__grasps(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GraspPlanning_Result__rosidl_typesupport_introspection_c__resize_function__Grasp__grasps(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  moveit_msgs__msg__Grasp__Sequence__fini(member);
  return moveit_msgs__msg__Grasp__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_member_array[1] = {
  {
    "grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_Result, grasps),  // bytes offset in struct
    NULL,  // default value
    GraspPlanning_Result__rosidl_typesupport_introspection_c__size_function__Grasp__grasps,  // size() function pointer
    GraspPlanning_Result__rosidl_typesupport_introspection_c__get_const_function__Grasp__grasps,  // get_const(index) function pointer
    GraspPlanning_Result__rosidl_typesupport_introspection_c__get_function__Grasp__grasps,  // get(index) function pointer
    GraspPlanning_Result__rosidl_typesupport_introspection_c__resize_function__Grasp__grasps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_Result",  // message name
  1,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_Result),
  GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_member_array,  // message members
  GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_type_support_handle = {
  0,
  &GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_Result)() {
  GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  if (!GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_Result__rosidl_typesupport_introspection_c__GraspPlanning_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `grasps`
// already included above
// #include "moveit_msgs/msg/grasp.h"
// Member `grasps`
// already included above
// #include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_Feedback__init(message_memory);
}

void GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_Feedback__fini(message_memory);
}

size_t GraspPlanning_Feedback__rosidl_typesupport_introspection_c__size_function__Grasp__grasps(
  const void * untyped_member)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return member->size;
}

const void * GraspPlanning_Feedback__rosidl_typesupport_introspection_c__get_const_function__Grasp__grasps(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GraspPlanning_Feedback__rosidl_typesupport_introspection_c__get_function__Grasp__grasps(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GraspPlanning_Feedback__rosidl_typesupport_introspection_c__resize_function__Grasp__grasps(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  moveit_msgs__msg__Grasp__Sequence__fini(member);
  return moveit_msgs__msg__Grasp__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_member_array[1] = {
  {
    "grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_Feedback, grasps),  // bytes offset in struct
    NULL,  // default value
    GraspPlanning_Feedback__rosidl_typesupport_introspection_c__size_function__Grasp__grasps,  // size() function pointer
    GraspPlanning_Feedback__rosidl_typesupport_introspection_c__get_const_function__Grasp__grasps,  // get_const(index) function pointer
    GraspPlanning_Feedback__rosidl_typesupport_introspection_c__get_function__Grasp__grasps,  // get(index) function pointer
    GraspPlanning_Feedback__rosidl_typesupport_introspection_c__resize_function__Grasp__grasps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_Feedback",  // message name
  1,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_Feedback),
  GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_member_array,  // message members
  GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_type_support_handle = {
  0,
  &GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_Feedback)() {
  GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  if (!GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_Feedback__rosidl_typesupport_introspection_c__GraspPlanning_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "grasping_msgs/action/grasp_planning.h"
// Member `goal`
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_SendGoal_Request__init(message_memory);
}

void GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Request),
  GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_member_array,  // message members
  GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_type_support_handle = {
  0,
  &GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_SendGoal_Request)() {
  GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_Goal)();
  if (!GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_SendGoal_Request__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_SendGoal_Response__init(message_memory);
}

void GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Response),
  GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_member_array,  // message members
  GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_type_support_handle = {
  0,
  &GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_SendGoal_Response)() {
  GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_SendGoal_Response__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_service_members = {
  "grasping_msgs__action",  // service namespace
  "GraspPlanning_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_service_type_support_handle = {
  0,
  &grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_SendGoal)() {
  if (!grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_service_type_support_handle.typesupport_identifier) {
    grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_SendGoal_Response)()->data;
  }

  return &grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_GetResult_Request__init(message_memory);
}

void GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_GetResult_Request),
  GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_member_array,  // message members
  GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_type_support_handle = {
  0,
  &GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_GetResult_Request)() {
  GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_GetResult_Request__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "grasping_msgs/action/grasp_planning.h"
// Member `result`
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_GetResult_Response__init(message_memory);
}

void GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_GetResult_Response),
  GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_member_array,  // message members
  GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_type_support_handle = {
  0,
  &GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_GetResult_Response)() {
  GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_Result)();
  if (!GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_GetResult_Response__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_service_members = {
  "grasping_msgs__action",  // service namespace
  "GraspPlanning_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_service_type_support_handle = {
  0,
  &grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_GetResult)() {
  if (!grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_service_type_support_handle.typesupport_identifier) {
    grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_GetResult_Response)()->data;
  }

  return &grasping_msgs__action__detail__grasp_planning__rosidl_typesupport_introspection_c__GraspPlanning_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "grasping_msgs/action/grasp_planning.h"
// Member `feedback`
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__GraspPlanning_FeedbackMessage__init(message_memory);
}

void GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_fini_function(void * message_memory)
{
  grasping_msgs__action__GraspPlanning_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__GraspPlanning_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_members = {
  "grasping_msgs__action",  // message namespace
  "GraspPlanning_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__GraspPlanning_FeedbackMessage),
  GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_member_array,  // message members
  GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_type_support_handle = {
  0,
  &GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_FeedbackMessage)() {
  GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, GraspPlanning_Feedback)();
  if (!GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspPlanning_FeedbackMessage__rosidl_typesupport_introspection_c__GraspPlanning_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
