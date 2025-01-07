// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grasping_msgs:msg/Object.idl
// generated code does not contain a copyright notice
#include "grasping_msgs/msg/detail/object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `name`
// Member `support_surface`
#include "rosidl_runtime_c/string_functions.h"
// Member `properties`
#include "grasping_msgs/msg/detail/object_property__functions.h"
// Member `point_cluster`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__functions.h"
// Member `primitive_poses`
// Member `mesh_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__functions.h"
// Member `surface`
#include "shape_msgs/msg/detail/plane__functions.h"

bool
grasping_msgs__msg__Object__init(grasping_msgs__msg__Object * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // support_surface
  if (!rosidl_runtime_c__String__init(&msg->support_surface)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // properties
  if (!grasping_msgs__msg__ObjectProperty__Sequence__init(&msg->properties, 0)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // point_cluster
  if (!sensor_msgs__msg__PointCloud2__init(&msg->point_cluster)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // primitives
  if (!shape_msgs__msg__SolidPrimitive__Sequence__init(&msg->primitives, 0)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // primitive_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->primitive_poses, 0)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // meshes
  if (!shape_msgs__msg__Mesh__Sequence__init(&msg->meshes, 0)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // mesh_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->mesh_poses, 0)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  // surface
  if (!shape_msgs__msg__Plane__init(&msg->surface)) {
    grasping_msgs__msg__Object__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__msg__Object__fini(grasping_msgs__msg__Object * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // support_surface
  rosidl_runtime_c__String__fini(&msg->support_surface);
  // properties
  grasping_msgs__msg__ObjectProperty__Sequence__fini(&msg->properties);
  // point_cluster
  sensor_msgs__msg__PointCloud2__fini(&msg->point_cluster);
  // primitives
  shape_msgs__msg__SolidPrimitive__Sequence__fini(&msg->primitives);
  // primitive_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->primitive_poses);
  // meshes
  shape_msgs__msg__Mesh__Sequence__fini(&msg->meshes);
  // mesh_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->mesh_poses);
  // surface
  shape_msgs__msg__Plane__fini(&msg->surface);
}

grasping_msgs__msg__Object *
grasping_msgs__msg__Object__create()
{
  grasping_msgs__msg__Object * msg = (grasping_msgs__msg__Object *)malloc(sizeof(grasping_msgs__msg__Object));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__msg__Object));
  bool success = grasping_msgs__msg__Object__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__msg__Object__destroy(grasping_msgs__msg__Object * msg)
{
  if (msg) {
    grasping_msgs__msg__Object__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__msg__Object__Sequence__init(grasping_msgs__msg__Object__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__msg__Object * data = NULL;
  if (size) {
    data = (grasping_msgs__msg__Object *)calloc(size, sizeof(grasping_msgs__msg__Object));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__msg__Object__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__msg__Object__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
grasping_msgs__msg__Object__Sequence__fini(grasping_msgs__msg__Object__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__msg__Object__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

grasping_msgs__msg__Object__Sequence *
grasping_msgs__msg__Object__Sequence__create(size_t size)
{
  grasping_msgs__msg__Object__Sequence * array = (grasping_msgs__msg__Object__Sequence *)malloc(sizeof(grasping_msgs__msg__Object__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__msg__Object__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__msg__Object__Sequence__destroy(grasping_msgs__msg__Object__Sequence * array)
{
  if (array) {
    grasping_msgs__msg__Object__Sequence__fini(array);
  }
  free(array);
}
