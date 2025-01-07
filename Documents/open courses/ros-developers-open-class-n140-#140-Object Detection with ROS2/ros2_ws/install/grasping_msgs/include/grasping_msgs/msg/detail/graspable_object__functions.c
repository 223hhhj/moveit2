// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grasping_msgs:msg/GraspableObject.idl
// generated code does not contain a copyright notice
#include "grasping_msgs/msg/detail/graspable_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `object`
#include "grasping_msgs/msg/detail/object__functions.h"
// Member `grasps`
#include "moveit_msgs/msg/detail/grasp__functions.h"

bool
grasping_msgs__msg__GraspableObject__init(grasping_msgs__msg__GraspableObject * msg)
{
  if (!msg) {
    return false;
  }
  // object
  if (!grasping_msgs__msg__Object__init(&msg->object)) {
    grasping_msgs__msg__GraspableObject__fini(msg);
    return false;
  }
  // grasps
  if (!moveit_msgs__msg__Grasp__Sequence__init(&msg->grasps, 0)) {
    grasping_msgs__msg__GraspableObject__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__msg__GraspableObject__fini(grasping_msgs__msg__GraspableObject * msg)
{
  if (!msg) {
    return;
  }
  // object
  grasping_msgs__msg__Object__fini(&msg->object);
  // grasps
  moveit_msgs__msg__Grasp__Sequence__fini(&msg->grasps);
}

grasping_msgs__msg__GraspableObject *
grasping_msgs__msg__GraspableObject__create()
{
  grasping_msgs__msg__GraspableObject * msg = (grasping_msgs__msg__GraspableObject *)malloc(sizeof(grasping_msgs__msg__GraspableObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__msg__GraspableObject));
  bool success = grasping_msgs__msg__GraspableObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__msg__GraspableObject__destroy(grasping_msgs__msg__GraspableObject * msg)
{
  if (msg) {
    grasping_msgs__msg__GraspableObject__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__msg__GraspableObject__Sequence__init(grasping_msgs__msg__GraspableObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__msg__GraspableObject * data = NULL;
  if (size) {
    data = (grasping_msgs__msg__GraspableObject *)calloc(size, sizeof(grasping_msgs__msg__GraspableObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__msg__GraspableObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__msg__GraspableObject__fini(&data[i - 1]);
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
grasping_msgs__msg__GraspableObject__Sequence__fini(grasping_msgs__msg__GraspableObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__msg__GraspableObject__fini(&array->data[i]);
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

grasping_msgs__msg__GraspableObject__Sequence *
grasping_msgs__msg__GraspableObject__Sequence__create(size_t size)
{
  grasping_msgs__msg__GraspableObject__Sequence * array = (grasping_msgs__msg__GraspableObject__Sequence *)malloc(sizeof(grasping_msgs__msg__GraspableObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__msg__GraspableObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__msg__GraspableObject__Sequence__destroy(grasping_msgs__msg__GraspableObject__Sequence * array)
{
  if (array) {
    grasping_msgs__msg__GraspableObject__Sequence__fini(array);
  }
  free(array);
}
