// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasping_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'name'
// Member 'support_surface'
#include "rosidl_runtime_c/string.h"
// Member 'properties'
#include "grasping_msgs/msg/detail/object_property__struct.h"
// Member 'point_cluster'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__struct.h"
// Member 'primitive_poses'
// Member 'mesh_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__struct.h"
// Member 'surface'
#include "shape_msgs/msg/detail/plane__struct.h"

// Struct defined in msg/Object in the package grasping_msgs.
typedef struct grasping_msgs__msg__Object
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String support_surface;
  grasping_msgs__msg__ObjectProperty__Sequence properties;
  sensor_msgs__msg__PointCloud2 point_cluster;
  shape_msgs__msg__SolidPrimitive__Sequence primitives;
  geometry_msgs__msg__Pose__Sequence primitive_poses;
  shape_msgs__msg__Mesh__Sequence meshes;
  geometry_msgs__msg__Pose__Sequence mesh_poses;
  shape_msgs__msg__Plane surface;
} grasping_msgs__msg__Object;

// Struct for a sequence of grasping_msgs__msg__Object.
typedef struct grasping_msgs__msg__Object__Sequence
{
  grasping_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
