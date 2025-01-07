// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasping_msgs:action/FindGraspableObjects.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
#include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
#include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_Goal__init(message_memory);
}

void FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_member_array[1] = {
  {
    "plan_grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_Goal, plan_grasps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_Goal",  // message name
  1,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_Goal),
  FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_member_array,  // message members
  FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_type_support_handle = {
  0,
  &FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Goal)() {
  if (!FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_Goal__rosidl_typesupport_introspection_c__FindGraspableObjects_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


// Include directives for member types
// Member `objects`
#include "grasping_msgs/msg/graspable_object.h"
// Member `objects`
#include "grasping_msgs/msg/detail/graspable_object__rosidl_typesupport_introspection_c.h"
// Member `support_surfaces`
#include "grasping_msgs/msg/object.h"
// Member `support_surfaces`
#include "grasping_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_Result__init(message_memory);
}

void FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_Result__fini(message_memory);
}

size_t FindGraspableObjects_Result__rosidl_typesupport_introspection_c__size_function__GraspableObject__objects(
  const void * untyped_member)
{
  const grasping_msgs__msg__GraspableObject__Sequence * member =
    (const grasping_msgs__msg__GraspableObject__Sequence *)(untyped_member);
  return member->size;
}

const void * FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_const_function__GraspableObject__objects(
  const void * untyped_member, size_t index)
{
  const grasping_msgs__msg__GraspableObject__Sequence * member =
    (const grasping_msgs__msg__GraspableObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_function__GraspableObject__objects(
  void * untyped_member, size_t index)
{
  grasping_msgs__msg__GraspableObject__Sequence * member =
    (grasping_msgs__msg__GraspableObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FindGraspableObjects_Result__rosidl_typesupport_introspection_c__resize_function__GraspableObject__objects(
  void * untyped_member, size_t size)
{
  grasping_msgs__msg__GraspableObject__Sequence * member =
    (grasping_msgs__msg__GraspableObject__Sequence *)(untyped_member);
  grasping_msgs__msg__GraspableObject__Sequence__fini(member);
  return grasping_msgs__msg__GraspableObject__Sequence__init(member, size);
}

size_t FindGraspableObjects_Result__rosidl_typesupport_introspection_c__size_function__Object__support_surfaces(
  const void * untyped_member)
{
  const grasping_msgs__msg__Object__Sequence * member =
    (const grasping_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_const_function__Object__support_surfaces(
  const void * untyped_member, size_t index)
{
  const grasping_msgs__msg__Object__Sequence * member =
    (const grasping_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_function__Object__support_surfaces(
  void * untyped_member, size_t index)
{
  grasping_msgs__msg__Object__Sequence * member =
    (grasping_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FindGraspableObjects_Result__rosidl_typesupport_introspection_c__resize_function__Object__support_surfaces(
  void * untyped_member, size_t size)
{
  grasping_msgs__msg__Object__Sequence * member =
    (grasping_msgs__msg__Object__Sequence *)(untyped_member);
  grasping_msgs__msg__Object__Sequence__fini(member);
  return grasping_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_member_array[2] = {
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_Result, objects),  // bytes offset in struct
    NULL,  // default value
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__size_function__GraspableObject__objects,  // size() function pointer
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_const_function__GraspableObject__objects,  // get_const(index) function pointer
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_function__GraspableObject__objects,  // get(index) function pointer
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__resize_function__GraspableObject__objects  // resize(index) function pointer
  },
  {
    "support_surfaces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_Result, support_surfaces),  // bytes offset in struct
    NULL,  // default value
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__size_function__Object__support_surfaces,  // size() function pointer
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_const_function__Object__support_surfaces,  // get_const(index) function pointer
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__get_function__Object__support_surfaces,  // get(index) function pointer
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__resize_function__Object__support_surfaces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_Result",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_Result),
  FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_member_array,  // message members
  FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_type_support_handle = {
  0,
  &FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Result)() {
  FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, GraspableObject)();
  FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, Object)();
  if (!FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_Result__rosidl_typesupport_introspection_c__FindGraspableObjects_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


// Include directives for member types
// Member `object`
// already included above
// #include "grasping_msgs/msg/graspable_object.h"
// Member `object`
// already included above
// #include "grasping_msgs/msg/detail/graspable_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_Feedback__init(message_memory);
}

void FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_member_array[1] = {
  {
    "object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_Feedback, object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_Feedback",  // message name
  1,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_Feedback),
  FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_member_array,  // message members
  FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_type_support_handle = {
  0,
  &FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Feedback)() {
  FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, GraspableObject)();
  if (!FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_Feedback__rosidl_typesupport_introspection_c__FindGraspableObjects_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "grasping_msgs/action/find_graspable_objects.h"
// Member `goal`
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_SendGoal_Request__init(message_memory);
}

void FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_SendGoal_Request, goal_id),  // bytes offset in struct
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
    offsetof(grasping_msgs__action__FindGraspableObjects_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_SendGoal_Request),
  FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_member_array,  // message members
  FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_type_support_handle = {
  0,
  &FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)() {
  FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Goal)();
  if (!FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_SendGoal_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_SendGoal_Response__init(message_memory);
}

void FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_SendGoal_Response, accepted),  // bytes offset in struct
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
    offsetof(grasping_msgs__action__FindGraspableObjects_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_SendGoal_Response),
  FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_member_array,  // message members
  FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_type_support_handle = {
  0,
  &FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)() {
  FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_SendGoal_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_service_members = {
  "grasping_msgs__action",  // service namespace
  "FindGraspableObjects_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_service_type_support_handle = {
  0,
  &grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal)() {
  if (!grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_service_type_support_handle.typesupport_identifier) {
    grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)()->data;
  }

  return &grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


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

void FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_GetResult_Request__init(message_memory);
}

void FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_GetResult_Request),
  FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_member_array,  // message members
  FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_type_support_handle = {
  0,
  &FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)() {
  FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_GetResult_Request__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "grasping_msgs/action/find_graspable_objects.h"
// Member `result`
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_GetResult_Response__init(message_memory);
}

void FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_GetResult_Response, status),  // bytes offset in struct
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
    offsetof(grasping_msgs__action__FindGraspableObjects_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_GetResult_Response),
  FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_member_array,  // message members
  FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_type_support_handle = {
  0,
  &FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)() {
  FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Result)();
  if (!FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_GetResult_Response__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_service_members = {
  "grasping_msgs__action",  // service namespace
  "FindGraspableObjects_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_service_type_support_handle = {
  0,
  &grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult)() {
  if (!grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_service_type_support_handle.typesupport_identifier) {
    grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)()->data;
  }

  return &grasping_msgs__action__detail__find_graspable_objects__rosidl_typesupport_introspection_c__FindGraspableObjects_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "grasping_msgs/action/find_graspable_objects.h"
// Member `feedback`
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__action__FindGraspableObjects_FeedbackMessage__init(message_memory);
}

void FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_fini_function(void * message_memory)
{
  grasping_msgs__action__FindGraspableObjects_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__action__FindGraspableObjects_FeedbackMessage, goal_id),  // bytes offset in struct
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
    offsetof(grasping_msgs__action__FindGraspableObjects_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_members = {
  "grasping_msgs__action",  // message namespace
  "FindGraspableObjects_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__action__FindGraspableObjects_FeedbackMessage),
  FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_member_array,  // message members
  FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_type_support_handle = {
  0,
  &FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_FeedbackMessage)() {
  FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Feedback)();
  if (!FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FindGraspableObjects_FeedbackMessage__rosidl_typesupport_introspection_c__FindGraspableObjects_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
