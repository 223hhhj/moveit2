// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from grasping_msgs:action/FindGraspableObjects.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__STRUCT_H_
#define GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_Goal
{
  bool plan_grasps;
} grasping_msgs__action__FindGraspableObjects_Goal;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_Goal.
typedef struct grasping_msgs__action__FindGraspableObjects_Goal__Sequence
{
  grasping_msgs__action__FindGraspableObjects_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'objects'
#include "grasping_msgs/msg/detail/graspable_object__struct.h"
// Member 'support_surfaces'
#include "grasping_msgs/msg/detail/object__struct.h"

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_Result
{
  grasping_msgs__msg__GraspableObject__Sequence objects;
  grasping_msgs__msg__Object__Sequence support_surfaces;
} grasping_msgs__action__FindGraspableObjects_Result;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_Result.
typedef struct grasping_msgs__action__FindGraspableObjects_Result__Sequence
{
  grasping_msgs__action__FindGraspableObjects_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'object'
// already included above
// #include "grasping_msgs/msg/detail/graspable_object__struct.h"

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_Feedback
{
  grasping_msgs__msg__GraspableObject object;
} grasping_msgs__action__FindGraspableObjects_Feedback;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_Feedback.
typedef struct grasping_msgs__action__FindGraspableObjects_Feedback__Sequence
{
  grasping_msgs__action__FindGraspableObjects_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "grasping_msgs/action/detail/find_graspable_objects__struct.h"

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  grasping_msgs__action__FindGraspableObjects_Goal goal;
} grasping_msgs__action__FindGraspableObjects_SendGoal_Request;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_SendGoal_Request.
typedef struct grasping_msgs__action__FindGraspableObjects_SendGoal_Request__Sequence
{
  grasping_msgs__action__FindGraspableObjects_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} grasping_msgs__action__FindGraspableObjects_SendGoal_Response;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_SendGoal_Response.
typedef struct grasping_msgs__action__FindGraspableObjects_SendGoal_Response__Sequence
{
  grasping_msgs__action__FindGraspableObjects_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} grasping_msgs__action__FindGraspableObjects_GetResult_Request;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_GetResult_Request.
typedef struct grasping_msgs__action__FindGraspableObjects_GetResult_Request__Sequence
{
  grasping_msgs__action__FindGraspableObjects_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_GetResult_Response
{
  int8_t status;
  grasping_msgs__action__FindGraspableObjects_Result result;
} grasping_msgs__action__FindGraspableObjects_GetResult_Response;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_GetResult_Response.
typedef struct grasping_msgs__action__FindGraspableObjects_GetResult_Response__Sequence
{
  grasping_msgs__action__FindGraspableObjects_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"

// Struct defined in action/FindGraspableObjects in the package grasping_msgs.
typedef struct grasping_msgs__action__FindGraspableObjects_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  grasping_msgs__action__FindGraspableObjects_Feedback feedback;
} grasping_msgs__action__FindGraspableObjects_FeedbackMessage;

// Struct for a sequence of grasping_msgs__action__FindGraspableObjects_FeedbackMessage.
typedef struct grasping_msgs__action__FindGraspableObjects_FeedbackMessage__Sequence
{
  grasping_msgs__action__FindGraspableObjects_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} grasping_msgs__action__FindGraspableObjects_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__STRUCT_H_
