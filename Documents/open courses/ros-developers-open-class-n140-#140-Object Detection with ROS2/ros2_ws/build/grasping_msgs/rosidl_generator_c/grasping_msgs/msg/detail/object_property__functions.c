// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grasping_msgs:msg/ObjectProperty.idl
// generated code does not contain a copyright notice
#include "grasping_msgs/msg/detail/object_property__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

bool
grasping_msgs__msg__ObjectProperty__init(grasping_msgs__msg__ObjectProperty * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    grasping_msgs__msg__ObjectProperty__fini(msg);
    return false;
  }
  // value
  if (!rosidl_runtime_c__String__init(&msg->value)) {
    grasping_msgs__msg__ObjectProperty__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__msg__ObjectProperty__fini(grasping_msgs__msg__ObjectProperty * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // value
  rosidl_runtime_c__String__fini(&msg->value);
}

grasping_msgs__msg__ObjectProperty *
grasping_msgs__msg__ObjectProperty__create()
{
  grasping_msgs__msg__ObjectProperty * msg = (grasping_msgs__msg__ObjectProperty *)malloc(sizeof(grasping_msgs__msg__ObjectProperty));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__msg__ObjectProperty));
  bool success = grasping_msgs__msg__ObjectProperty__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__msg__ObjectProperty__destroy(grasping_msgs__msg__ObjectProperty * msg)
{
  if (msg) {
    grasping_msgs__msg__ObjectProperty__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__msg__ObjectProperty__Sequence__init(grasping_msgs__msg__ObjectProperty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__msg__ObjectProperty * data = NULL;
  if (size) {
    data = (grasping_msgs__msg__ObjectProperty *)calloc(size, sizeof(grasping_msgs__msg__ObjectProperty));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__msg__ObjectProperty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__msg__ObjectProperty__fini(&data[i - 1]);
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
grasping_msgs__msg__ObjectProperty__Sequence__fini(grasping_msgs__msg__ObjectProperty__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__msg__ObjectProperty__fini(&array->data[i]);
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

grasping_msgs__msg__ObjectProperty__Sequence *
grasping_msgs__msg__ObjectProperty__Sequence__create(size_t size)
{
  grasping_msgs__msg__ObjectProperty__Sequence * array = (grasping_msgs__msg__ObjectProperty__Sequence *)malloc(sizeof(grasping_msgs__msg__ObjectProperty__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__msg__ObjectProperty__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__msg__ObjectProperty__Sequence__destroy(grasping_msgs__msg__ObjectProperty__Sequence * array)
{
  if (array) {
    grasping_msgs__msg__ObjectProperty__Sequence__fini(array);
  }
  free(array);
}
