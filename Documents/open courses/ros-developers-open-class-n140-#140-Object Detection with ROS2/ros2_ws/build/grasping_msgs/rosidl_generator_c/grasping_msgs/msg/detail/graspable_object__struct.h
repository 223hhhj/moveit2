// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__STRUCT_H_
#define GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'object'
#include "grasping_msgs/msg/detail/object__struct.h"
// Member 'grasps'
#include "moveit_msgs/msg/detail/grasp__struct.h"

// Struct defined in msg/GraspableObject in the package grasping_msgs.
typedef struct grasping_msgs__msg__GraspableObject
{
  grasping_msgs__msg__Object object;
  moveit_msgs__msg__Grasp__Sequence grasps;
} grasping_msgs__msg__GraspableObject;

// Struct for a sequence of grasping_msgs__msg__GraspableObject.
typedef struct grasping_msgs__msg__GraspableObject__Sequence
{
  grasping_msgs__msg__GraspableObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__msg__GraspableObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASPING_MSGS__MSG__DETAIL__GRASPABLE_OBJECT__STRUCT_H_
