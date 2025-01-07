// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from grasping_msgs:msg/ObjectProperty.idl
// generated code does not contain a copyright notice
#include "grasping_msgs/msg/detail/object_property__rosidl_typesupport_fastrtps_cpp.hpp"
#include "grasping_msgs/msg/detail/object_property__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace grasping_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
cdr_serialize(
  const grasping_msgs::msg::ObjectProperty & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: name
  cdr << ros_message.name;
  // Member: value
  cdr << ros_message.value;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  grasping_msgs::msg::ObjectProperty & ros_message)
{
  // Member: name
  cdr >> ros_message.name;

  // Member: value
  cdr >> ros_message.value;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
get_serialized_size(
  const grasping_msgs::msg::ObjectProperty & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.name.size() + 1);
  // Member: value
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.value.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_grasping_msgs
max_serialized_size_ObjectProperty(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: value
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _ObjectProperty__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const grasping_msgs::msg::ObjectProperty *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectProperty__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<grasping_msgs::msg::ObjectProperty *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectProperty__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const grasping_msgs::msg::ObjectProperty *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectProperty__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ObjectProperty(full_bounded, 0);
}

static message_type_support_callbacks_t _ObjectProperty__callbacks = {
  "grasping_msgs::msg",
  "ObjectProperty",
  _ObjectProperty__cdr_serialize,
  _ObjectProperty__cdr_deserialize,
  _ObjectProperty__get_serialized_size,
  _ObjectProperty__max_serialized_size
};

static rosidl_message_type_support_t _ObjectProperty__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectProperty__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace grasping_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::msg::ObjectProperty>()
{
  return &grasping_msgs::msg::typesupport_fastrtps_cpp::_ObjectProperty__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, msg, ObjectProperty)() {
  return &grasping_msgs::msg::typesupport_fastrtps_cpp::_ObjectProperty__handle;
}

#ifdef __cplusplus
}
#endif
