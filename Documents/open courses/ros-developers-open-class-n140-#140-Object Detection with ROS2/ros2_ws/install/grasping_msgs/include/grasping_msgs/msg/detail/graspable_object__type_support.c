// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasping_msgs/msg/detail/graspable_object__rosidl_typesupport_introspection_c.h"
#include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasping_msgs/msg/detail/graspable_object__functions.h"
#include "grasping_msgs/msg/detail/graspable_object__struct.h"


// Include directives for member types
// Member `object`
#include "grasping_msgs/msg/object.h"
// Member `object`
#include "grasping_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"
// Member `grasps`
#include "moveit_msgs/msg/grasp.h"
// Member `grasps`
#include "moveit_msgs/msg/detail/grasp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__msg__GraspableObject__init(message_memory);
}

void GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_fini_function(void * message_memory)
{
  grasping_msgs__msg__GraspableObject__fini(message_memory);
}

size_t GraspableObject__rosidl_typesupport_introspection_c__size_function__Grasp__grasps(
  const void * untyped_member)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return member->size;
}

const void * GraspableObject__rosidl_typesupport_introspection_c__get_const_function__Grasp__grasps(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Grasp__Sequence * member =
    (const moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GraspableObject__rosidl_typesupport_introspection_c__get_function__Grasp__grasps(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GraspableObject__rosidl_typesupport_introspection_c__resize_function__Grasp__grasps(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Grasp__Sequence * member =
    (moveit_msgs__msg__Grasp__Sequence *)(untyped_member);
  moveit_msgs__msg__Grasp__Sequence__fini(member);
  return moveit_msgs__msg__Grasp__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_member_array[2] = {
  {
    "object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__GraspableObject, object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__GraspableObject, grasps),  // bytes offset in struct
    NULL,  // default value
    GraspableObject__rosidl_typesupport_introspection_c__size_function__Grasp__grasps,  // size() function pointer
    GraspableObject__rosidl_typesupport_introspection_c__get_const_function__Grasp__grasps,  // get_const(index) function pointer
    GraspableObject__rosidl_typesupport_introspection_c__get_function__Grasp__grasps,  // get(index) function pointer
    GraspableObject__rosidl_typesupport_introspection_c__resize_function__Grasp__grasps  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_members = {
  "grasping_msgs__msg",  // message namespace
  "GraspableObject",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__msg__GraspableObject),
  GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_member_array,  // message members
  GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_init_function,  // function to initialize message memory (memory has to be allocated)
  GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_type_support_handle = {
  0,
  &GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, GraspableObject)() {
  GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, Object)();
  GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Grasp)();
  if (!GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_type_support_handle.typesupport_identifier) {
    GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GraspableObject__rosidl_typesupport_introspection_c__GraspableObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
