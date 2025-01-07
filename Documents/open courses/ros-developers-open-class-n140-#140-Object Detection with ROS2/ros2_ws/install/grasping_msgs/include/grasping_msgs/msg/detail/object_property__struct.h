// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasping_msgs:msg/ObjectProperty.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__STRUCT_H_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'value'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/ObjectProperty in the package grasping_msgs.
typedef struct grasping_msgs__msg__ObjectProperty
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String value;
} grasping_msgs__msg__ObjectProperty;

// Struct for a sequence of grasping_msgs__msg__ObjectProperty.
typedef struct grasping_msgs__msg__ObjectProperty__Sequence
{
  grasping_msgs__msg__ObjectProperty * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__msg__ObjectProperty__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT_PROPERTY__STRUCT_H_
