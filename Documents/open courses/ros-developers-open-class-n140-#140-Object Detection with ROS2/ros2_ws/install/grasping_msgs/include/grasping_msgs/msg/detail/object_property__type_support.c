// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasping_msgs:msg/ObjectProperty.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasping_msgs/msg/detail/object_property__rosidl_typesupport_introspection_c.h"
#include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasping_msgs/msg/detail/object_property__functions.h"
#include "grasping_msgs/msg/detail/object_property__struct.h"


// Include directives for member types
// Member `name`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__msg__ObjectProperty__init(message_memory);
}

void ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_fini_function(void * message_memory)
{
  grasping_msgs__msg__ObjectProperty__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__ObjectProperty, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__ObjectProperty, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_members = {
  "grasping_msgs__msg",  // message namespace
  "ObjectProperty",  // message name
  2,  // number of fields
  sizeof(grasping_msgs__msg__ObjectProperty),
  ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_member_array,  // message members
  ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_type_support_handle = {
  0,
  &ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, ObjectProperty)() {
  if (!ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_type_support_handle.typesupport_identifier) {
    ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectProperty__rosidl_typesupport_introspection_c__ObjectProperty_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
