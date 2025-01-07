// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from grasping_msgs:action/GraspPlanning.idl
// generated code does not contain a copyright notice
#include "grasping_msgs/action/detail/grasp_planning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `object`
#include "grasping_msgs/msg/detail/object__functions.h"
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"

bool
grasping_msgs__action__GraspPlanning_Goal__init(grasping_msgs__action__GraspPlanning_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // object
  if (!grasping_msgs__msg__Object__init(&msg->object)) {
    grasping_msgs__action__GraspPlanning_Goal__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    grasping_msgs__action__GraspPlanning_Goal__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_Goal__fini(grasping_msgs__action__GraspPlanning_Goal * msg)
{
  if (!msg) {
    return;
  }
  // object
  grasping_msgs__msg__Object__fini(&msg->object);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
}

grasping_msgs__action__GraspPlanning_Goal *
grasping_msgs__action__GraspPlanning_Goal__create()
{
  grasping_msgs__action__GraspPlanning_Goal * msg = (grasping_msgs__action__GraspPlanning_Goal *)malloc(sizeof(grasping_msgs__action__GraspPlanning_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_Goal));
  bool success = grasping_msgs__action__GraspPlanning_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_Goal__destroy(grasping_msgs__action__GraspPlanning_Goal * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_Goal__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_Goal__Sequence__init(grasping_msgs__action__GraspPlanning_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_Goal * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_Goal *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_Goal__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_Goal__Sequence__fini(grasping_msgs__action__GraspPlanning_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_Goal__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_Goal__Sequence *
grasping_msgs__action__GraspPlanning_Goal__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_Goal__Sequence * array = (grasping_msgs__action__GraspPlanning_Goal__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_Goal__Sequence__destroy(grasping_msgs__action__GraspPlanning_Goal__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `grasps`
#include "moveit_msgs/msg/detail/grasp__functions.h"

bool
grasping_msgs__action__GraspPlanning_Result__init(grasping_msgs__action__GraspPlanning_Result * msg)
{
  if (!msg) {
    return false;
  }
  // grasps
  if (!moveit_msgs__msg__Grasp__Sequence__init(&msg->grasps, 0)) {
    grasping_msgs__action__GraspPlanning_Result__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_Result__fini(grasping_msgs__action__GraspPlanning_Result * msg)
{
  if (!msg) {
    return;
  }
  // grasps
  moveit_msgs__msg__Grasp__Sequence__fini(&msg->grasps);
}

grasping_msgs__action__GraspPlanning_Result *
grasping_msgs__action__GraspPlanning_Result__create()
{
  grasping_msgs__action__GraspPlanning_Result * msg = (grasping_msgs__action__GraspPlanning_Result *)malloc(sizeof(grasping_msgs__action__GraspPlanning_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_Result));
  bool success = grasping_msgs__action__GraspPlanning_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_Result__destroy(grasping_msgs__action__GraspPlanning_Result * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_Result__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_Result__Sequence__init(grasping_msgs__action__GraspPlanning_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_Result * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_Result *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_Result__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_Result__Sequence__fini(grasping_msgs__action__GraspPlanning_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_Result__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_Result__Sequence *
grasping_msgs__action__GraspPlanning_Result__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_Result__Sequence * array = (grasping_msgs__action__GraspPlanning_Result__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_Result__Sequence__destroy(grasping_msgs__action__GraspPlanning_Result__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `grasps`
// already included above
// #include "moveit_msgs/msg/detail/grasp__functions.h"

bool
grasping_msgs__action__GraspPlanning_Feedback__init(grasping_msgs__action__GraspPlanning_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // grasps
  if (!moveit_msgs__msg__Grasp__Sequence__init(&msg->grasps, 0)) {
    grasping_msgs__action__GraspPlanning_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_Feedback__fini(grasping_msgs__action__GraspPlanning_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // grasps
  moveit_msgs__msg__Grasp__Sequence__fini(&msg->grasps);
}

grasping_msgs__action__GraspPlanning_Feedback *
grasping_msgs__action__GraspPlanning_Feedback__create()
{
  grasping_msgs__action__GraspPlanning_Feedback * msg = (grasping_msgs__action__GraspPlanning_Feedback *)malloc(sizeof(grasping_msgs__action__GraspPlanning_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_Feedback));
  bool success = grasping_msgs__action__GraspPlanning_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_Feedback__destroy(grasping_msgs__action__GraspPlanning_Feedback * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_Feedback__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_Feedback__Sequence__init(grasping_msgs__action__GraspPlanning_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_Feedback * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_Feedback *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_Feedback__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_Feedback__Sequence__fini(grasping_msgs__action__GraspPlanning_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_Feedback__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_Feedback__Sequence *
grasping_msgs__action__GraspPlanning_Feedback__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_Feedback__Sequence * array = (grasping_msgs__action__GraspPlanning_Feedback__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_Feedback__Sequence__destroy(grasping_msgs__action__GraspPlanning_Feedback__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"

bool
grasping_msgs__action__GraspPlanning_SendGoal_Request__init(grasping_msgs__action__GraspPlanning_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    grasping_msgs__action__GraspPlanning_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!grasping_msgs__action__GraspPlanning_Goal__init(&msg->goal)) {
    grasping_msgs__action__GraspPlanning_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_SendGoal_Request__fini(grasping_msgs__action__GraspPlanning_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  grasping_msgs__action__GraspPlanning_Goal__fini(&msg->goal);
}

grasping_msgs__action__GraspPlanning_SendGoal_Request *
grasping_msgs__action__GraspPlanning_SendGoal_Request__create()
{
  grasping_msgs__action__GraspPlanning_SendGoal_Request * msg = (grasping_msgs__action__GraspPlanning_SendGoal_Request *)malloc(sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Request));
  bool success = grasping_msgs__action__GraspPlanning_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_SendGoal_Request__destroy(grasping_msgs__action__GraspPlanning_SendGoal_Request * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence__init(grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_SendGoal_Request * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_SendGoal_Request *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_SendGoal_Request__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence__fini(grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_SendGoal_Request__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence *
grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence * array = (grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence__destroy(grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
grasping_msgs__action__GraspPlanning_SendGoal_Response__init(grasping_msgs__action__GraspPlanning_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    grasping_msgs__action__GraspPlanning_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_SendGoal_Response__fini(grasping_msgs__action__GraspPlanning_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

grasping_msgs__action__GraspPlanning_SendGoal_Response *
grasping_msgs__action__GraspPlanning_SendGoal_Response__create()
{
  grasping_msgs__action__GraspPlanning_SendGoal_Response * msg = (grasping_msgs__action__GraspPlanning_SendGoal_Response *)malloc(sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Response));
  bool success = grasping_msgs__action__GraspPlanning_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_SendGoal_Response__destroy(grasping_msgs__action__GraspPlanning_SendGoal_Response * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence__init(grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_SendGoal_Response * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_SendGoal_Response *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_SendGoal_Response__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence__fini(grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_SendGoal_Response__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence *
grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence * array = (grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence__destroy(grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
grasping_msgs__action__GraspPlanning_GetResult_Request__init(grasping_msgs__action__GraspPlanning_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    grasping_msgs__action__GraspPlanning_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_GetResult_Request__fini(grasping_msgs__action__GraspPlanning_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

grasping_msgs__action__GraspPlanning_GetResult_Request *
grasping_msgs__action__GraspPlanning_GetResult_Request__create()
{
  grasping_msgs__action__GraspPlanning_GetResult_Request * msg = (grasping_msgs__action__GraspPlanning_GetResult_Request *)malloc(sizeof(grasping_msgs__action__GraspPlanning_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_GetResult_Request));
  bool success = grasping_msgs__action__GraspPlanning_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_GetResult_Request__destroy(grasping_msgs__action__GraspPlanning_GetResult_Request * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence__init(grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_GetResult_Request * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_GetResult_Request *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_GetResult_Request__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence__fini(grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_GetResult_Request__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence *
grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence * array = (grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence__destroy(grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"

bool
grasping_msgs__action__GraspPlanning_GetResult_Response__init(grasping_msgs__action__GraspPlanning_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!grasping_msgs__action__GraspPlanning_Result__init(&msg->result)) {
    grasping_msgs__action__GraspPlanning_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_GetResult_Response__fini(grasping_msgs__action__GraspPlanning_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  grasping_msgs__action__GraspPlanning_Result__fini(&msg->result);
}

grasping_msgs__action__GraspPlanning_GetResult_Response *
grasping_msgs__action__GraspPlanning_GetResult_Response__create()
{
  grasping_msgs__action__GraspPlanning_GetResult_Response * msg = (grasping_msgs__action__GraspPlanning_GetResult_Response *)malloc(sizeof(grasping_msgs__action__GraspPlanning_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_GetResult_Response));
  bool success = grasping_msgs__action__GraspPlanning_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_GetResult_Response__destroy(grasping_msgs__action__GraspPlanning_GetResult_Response * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence__init(grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_GetResult_Response * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_GetResult_Response *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_GetResult_Response__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence__fini(grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_GetResult_Response__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence *
grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence * array = (grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence__destroy(grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__functions.h"

bool
grasping_msgs__action__GraspPlanning_FeedbackMessage__init(grasping_msgs__action__GraspPlanning_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    grasping_msgs__action__GraspPlanning_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!grasping_msgs__action__GraspPlanning_Feedback__init(&msg->feedback)) {
    grasping_msgs__action__GraspPlanning_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
grasping_msgs__action__GraspPlanning_FeedbackMessage__fini(grasping_msgs__action__GraspPlanning_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  grasping_msgs__action__GraspPlanning_Feedback__fini(&msg->feedback);
}

grasping_msgs__action__GraspPlanning_FeedbackMessage *
grasping_msgs__action__GraspPlanning_FeedbackMessage__create()
{
  grasping_msgs__action__GraspPlanning_FeedbackMessage * msg = (grasping_msgs__action__GraspPlanning_FeedbackMessage *)malloc(sizeof(grasping_msgs__action__GraspPlanning_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(grasping_msgs__action__GraspPlanning_FeedbackMessage));
  bool success = grasping_msgs__action__GraspPlanning_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
grasping_msgs__action__GraspPlanning_FeedbackMessage__destroy(grasping_msgs__action__GraspPlanning_FeedbackMessage * msg)
{
  if (msg) {
    grasping_msgs__action__GraspPlanning_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence__init(grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  grasping_msgs__action__GraspPlanning_FeedbackMessage * data = NULL;
  if (size) {
    data = (grasping_msgs__action__GraspPlanning_FeedbackMessage *)calloc(size, sizeof(grasping_msgs__action__GraspPlanning_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = grasping_msgs__action__GraspPlanning_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        grasping_msgs__action__GraspPlanning_FeedbackMessage__fini(&data[i - 1]);
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
grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence__fini(grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      grasping_msgs__action__GraspPlanning_FeedbackMessage__fini(&array->data[i]);
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

grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence *
grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence__create(size_t size)
{
  grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence * array = (grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence *)malloc(sizeof(grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence__destroy(grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence * array)
{
  if (array) {
    grasping_msgs__action__GraspPlanning_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
