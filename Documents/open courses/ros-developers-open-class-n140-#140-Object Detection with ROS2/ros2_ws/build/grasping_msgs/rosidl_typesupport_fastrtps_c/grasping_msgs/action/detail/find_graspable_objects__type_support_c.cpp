// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from grasping_msgs:action/FindGraspableObjects.idl
// generated code does not contain a copyright notice
#include "grasping_msgs/action/detail/find_graspable_objects__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
#include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FindGraspableObjects_Goal__ros_msg_type = grasping_msgs__action__FindGraspableObjects_Goal;

static bool _FindGraspableObjects_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_Goal__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: plan_grasps
  {
    cdr << (ros_message->plan_grasps ? true : false);
  }

  return true;
}

static bool _FindGraspableObjects_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_Goal__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: plan_grasps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->plan_grasps = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_Goal__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name plan_grasps
  {
    size_t item_size = sizeof(ros_message->plan_grasps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: plan_grasps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_Goal__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_Goal = {
  "grasping_msgs::action",
  "FindGraspableObjects_Goal",
  _FindGraspableObjects_Goal__cdr_serialize,
  _FindGraspableObjects_Goal__cdr_deserialize,
  _FindGraspableObjects_Goal__get_serialized_size,
  _FindGraspableObjects_Goal__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Goal)() {
  return &_FindGraspableObjects_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "grasping_msgs/msg/detail/graspable_object__functions.h"  // objects
#include "grasping_msgs/msg/detail/object__functions.h"  // support_surfaces

// forward declare type support functions
size_t get_serialized_size_grasping_msgs__msg__GraspableObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_grasping_msgs__msg__GraspableObject(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, msg, GraspableObject)();
size_t get_serialized_size_grasping_msgs__msg__Object(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_grasping_msgs__msg__Object(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, msg, Object)();


using _FindGraspableObjects_Result__ros_msg_type = grasping_msgs__action__FindGraspableObjects_Result;

static bool _FindGraspableObjects_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_Result__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, msg, GraspableObject
      )()->data);
    size_t size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: support_surfaces
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, msg, Object
      )()->data);
    size_t size = ros_message->support_surfaces.size;
    auto array_ptr = ros_message->support_surfaces.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _FindGraspableObjects_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_Result__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, msg, GraspableObject
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects.data) {
      grasping_msgs__msg__GraspableObject__Sequence__fini(&ros_message->objects);
    }
    if (!grasping_msgs__msg__GraspableObject__Sequence__init(&ros_message->objects, size)) {
      return "failed to create array for field 'objects'";
    }
    auto array_ptr = ros_message->objects.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: support_surfaces
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, msg, Object
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->support_surfaces.data) {
      grasping_msgs__msg__Object__Sequence__fini(&ros_message->support_surfaces);
    }
    if (!grasping_msgs__msg__Object__Sequence__init(&ros_message->support_surfaces, size)) {
      return "failed to create array for field 'support_surfaces'";
    }
    auto array_ptr = ros_message->support_surfaces.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_Result__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name objects
  {
    size_t array_size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_grasping_msgs__msg__GraspableObject(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name support_surfaces
  {
    size_t array_size = ros_message->support_surfaces.size;
    auto array_ptr = ros_message->support_surfaces.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_grasping_msgs__msg__Object(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: objects
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_grasping_msgs__msg__GraspableObject(
        full_bounded, current_alignment);
    }
  }
  // member: support_surfaces
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_grasping_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_Result__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_Result = {
  "grasping_msgs::action",
  "FindGraspableObjects_Result",
  _FindGraspableObjects_Result__cdr_serialize,
  _FindGraspableObjects_Result__cdr_deserialize,
  _FindGraspableObjects_Result__get_serialized_size,
  _FindGraspableObjects_Result__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Result)() {
  return &_FindGraspableObjects_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "grasping_msgs/msg/detail/graspable_object__functions.h"  // object

// forward declare type support functions
size_t get_serialized_size_grasping_msgs__msg__GraspableObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_grasping_msgs__msg__GraspableObject(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, msg, GraspableObject)();


using _FindGraspableObjects_Feedback__ros_msg_type = grasping_msgs__action__FindGraspableObjects_Feedback;

static bool _FindGraspableObjects_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_Feedback__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, msg, GraspableObject
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FindGraspableObjects_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_Feedback__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: object
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, msg, GraspableObject
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_Feedback__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object

  current_alignment += get_serialized_size_grasping_msgs__msg__GraspableObject(
    &(ros_message->object), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_grasping_msgs__msg__GraspableObject(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_Feedback__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_Feedback = {
  "grasping_msgs::action",
  "FindGraspableObjects_Feedback",
  _FindGraspableObjects_Feedback__cdr_serialize,
  _FindGraspableObjects_Feedback__cdr_deserialize,
  _FindGraspableObjects_Feedback__get_serialized_size,
  _FindGraspableObjects_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Feedback)() {
  return &_FindGraspableObjects_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FindGraspableObjects_SendGoal_Request__ros_msg_type = grasping_msgs__action__FindGraspableObjects_SendGoal_Request;

static bool _FindGraspableObjects_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FindGraspableObjects_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_SendGoal_Request__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_grasping_msgs__action__FindGraspableObjects_Goal(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_SendGoal_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_SendGoal_Request = {
  "grasping_msgs::action",
  "FindGraspableObjects_SendGoal_Request",
  _FindGraspableObjects_SendGoal_Request__cdr_serialize,
  _FindGraspableObjects_SendGoal_Request__cdr_deserialize,
  _FindGraspableObjects_SendGoal_Request__get_serialized_size,
  _FindGraspableObjects_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)() {
  return &_FindGraspableObjects_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _FindGraspableObjects_SendGoal_Response__ros_msg_type = grasping_msgs__action__FindGraspableObjects_SendGoal_Response;

static bool _FindGraspableObjects_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FindGraspableObjects_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_SendGoal_Response__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: accepted
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_builtin_interfaces__msg__Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_SendGoal_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_SendGoal_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_SendGoal_Response = {
  "grasping_msgs::action",
  "FindGraspableObjects_SendGoal_Response",
  _FindGraspableObjects_SendGoal_Response__cdr_serialize,
  _FindGraspableObjects_SendGoal_Response__cdr_deserialize,
  _FindGraspableObjects_SendGoal_Response__get_serialized_size,
  _FindGraspableObjects_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)() {
  return &_FindGraspableObjects_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "grasping_msgs/action/find_graspable_objects.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FindGraspableObjects_SendGoal__callbacks = {
  "grasping_msgs::action",
  "FindGraspableObjects_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)(),
};

static rosidl_service_type_support_t FindGraspableObjects_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FindGraspableObjects_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal)() {
  return &FindGraspableObjects_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FindGraspableObjects_GetResult_Request__ros_msg_type = grasping_msgs__action__FindGraspableObjects_GetResult_Request;

static bool _FindGraspableObjects_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_GetResult_Request__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FindGraspableObjects_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_GetResult_Request__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_GetResult_Request__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_GetResult_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_GetResult_Request = {
  "grasping_msgs::action",
  "FindGraspableObjects_GetResult_Request",
  _FindGraspableObjects_GetResult_Request__cdr_serialize,
  _FindGraspableObjects_GetResult_Request__cdr_deserialize,
  _FindGraspableObjects_GetResult_Request__get_serialized_size,
  _FindGraspableObjects_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)() {
  return &_FindGraspableObjects_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Result)();


using _FindGraspableObjects_GetResult_Response__ros_msg_type = grasping_msgs__action__FindGraspableObjects_GetResult_Response;

static bool _FindGraspableObjects_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_GetResult_Response__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FindGraspableObjects_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_GetResult_Response__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_GetResult_Response__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_grasping_msgs__action__FindGraspableObjects_Result(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_GetResult_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_GetResult_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_GetResult_Response = {
  "grasping_msgs::action",
  "FindGraspableObjects_GetResult_Response",
  _FindGraspableObjects_GetResult_Response__cdr_serialize,
  _FindGraspableObjects_GetResult_Response__cdr_deserialize,
  _FindGraspableObjects_GetResult_Response__get_serialized_size,
  _FindGraspableObjects_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)() {
  return &_FindGraspableObjects_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/find_graspable_objects.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FindGraspableObjects_GetResult__callbacks = {
  "grasping_msgs::action",
  "FindGraspableObjects_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)(),
};

static rosidl_service_type_support_t FindGraspableObjects_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FindGraspableObjects_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult)() {
  return &FindGraspableObjects_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_grasping_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _FindGraspableObjects_FeedbackMessage__ros_msg_type = grasping_msgs__action__FindGraspableObjects_FeedbackMessage;

static bool _FindGraspableObjects_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FindGraspableObjects_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FindGraspableObjects_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FindGraspableObjects_FeedbackMessage__ros_msg_type * ros_message = static_cast<_FindGraspableObjects_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t get_serialized_size_grasping_msgs__action__FindGraspableObjects_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FindGraspableObjects_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _FindGraspableObjects_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FindGraspableObjects_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_grasping_msgs__action__FindGraspableObjects_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_grasping_msgs
size_t max_serialized_size_grasping_msgs__action__FindGraspableObjects_FeedbackMessage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: goal_id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        full_bounded, current_alignment);
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_grasping_msgs__action__FindGraspableObjects_Feedback(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _FindGraspableObjects_FeedbackMessage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_grasping_msgs__action__FindGraspableObjects_FeedbackMessage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FindGraspableObjects_FeedbackMessage = {
  "grasping_msgs::action",
  "FindGraspableObjects_FeedbackMessage",
  _FindGraspableObjects_FeedbackMessage__cdr_serialize,
  _FindGraspableObjects_FeedbackMessage__cdr_deserialize,
  _FindGraspableObjects_FeedbackMessage__get_serialized_size,
  _FindGraspableObjects_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _FindGraspableObjects_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FindGraspableObjects_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_FeedbackMessage)() {
  return &_FindGraspableObjects_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif
