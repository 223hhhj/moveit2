// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from grasping_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "grasping_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"
#include "grasping_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "grasping_msgs/msg/detail/object__functions.h"
#include "grasping_msgs/msg/detail/object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `support_surface`
#include "rosidl_runtime_c/string_functions.h"
// Member `properties`
#include "grasping_msgs/msg/object_property.h"
// Member `properties`
#include "grasping_msgs/msg/detail/object_property__rosidl_typesupport_introspection_c.h"
// Member `point_cluster`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `point_cluster`
#include "sensor_msgs/msg/detail/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `primitives`
#include "shape_msgs/msg/solid_primitive.h"
// Member `primitives`
#include "shape_msgs/msg/detail/solid_primitive__rosidl_typesupport_introspection_c.h"
// Member `primitive_poses`
// Member `mesh_poses`
#include "geometry_msgs/msg/pose.h"
// Member `primitive_poses`
// Member `mesh_poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `meshes`
#include "shape_msgs/msg/mesh.h"
// Member `meshes`
#include "shape_msgs/msg/detail/mesh__rosidl_typesupport_introspection_c.h"
// Member `surface`
#include "shape_msgs/msg/plane.h"
// Member `surface`
#include "shape_msgs/msg/detail/plane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Object__rosidl_typesupport_introspection_c__Object_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  grasping_msgs__msg__Object__init(message_memory);
}

void Object__rosidl_typesupport_introspection_c__Object_fini_function(void * message_memory)
{
  grasping_msgs__msg__Object__fini(message_memory);
}

size_t Object__rosidl_typesupport_introspection_c__size_function__ObjectProperty__properties(
  const void * untyped_member)
{
  const grasping_msgs__msg__ObjectProperty__Sequence * member =
    (const grasping_msgs__msg__ObjectProperty__Sequence *)(untyped_member);
  return member->size;
}

const void * Object__rosidl_typesupport_introspection_c__get_const_function__ObjectProperty__properties(
  const void * untyped_member, size_t index)
{
  const grasping_msgs__msg__ObjectProperty__Sequence * member =
    (const grasping_msgs__msg__ObjectProperty__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Object__rosidl_typesupport_introspection_c__get_function__ObjectProperty__properties(
  void * untyped_member, size_t index)
{
  grasping_msgs__msg__ObjectProperty__Sequence * member =
    (grasping_msgs__msg__ObjectProperty__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Object__rosidl_typesupport_introspection_c__resize_function__ObjectProperty__properties(
  void * untyped_member, size_t size)
{
  grasping_msgs__msg__ObjectProperty__Sequence * member =
    (grasping_msgs__msg__ObjectProperty__Sequence *)(untyped_member);
  grasping_msgs__msg__ObjectProperty__Sequence__fini(member);
  return grasping_msgs__msg__ObjectProperty__Sequence__init(member, size);
}

size_t Object__rosidl_typesupport_introspection_c__size_function__SolidPrimitive__primitives(
  const void * untyped_member)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return member->size;
}

const void * Object__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitive__primitives(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__SolidPrimitive__Sequence * member =
    (const shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Object__rosidl_typesupport_introspection_c__get_function__SolidPrimitive__primitives(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Object__rosidl_typesupport_introspection_c__resize_function__SolidPrimitive__primitives(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__SolidPrimitive__Sequence * member =
    (shape_msgs__msg__SolidPrimitive__Sequence *)(untyped_member);
  shape_msgs__msg__SolidPrimitive__Sequence__fini(member);
  return shape_msgs__msg__SolidPrimitive__Sequence__init(member, size);
}

size_t Object__rosidl_typesupport_introspection_c__size_function__Pose__primitive_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * Object__rosidl_typesupport_introspection_c__get_const_function__Pose__primitive_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Object__rosidl_typesupport_introspection_c__get_function__Pose__primitive_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Object__rosidl_typesupport_introspection_c__resize_function__Pose__primitive_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t Object__rosidl_typesupport_introspection_c__size_function__Mesh__meshes(
  const void * untyped_member)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return member->size;
}

const void * Object__rosidl_typesupport_introspection_c__get_const_function__Mesh__meshes(
  const void * untyped_member, size_t index)
{
  const shape_msgs__msg__Mesh__Sequence * member =
    (const shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Object__rosidl_typesupport_introspection_c__get_function__Mesh__meshes(
  void * untyped_member, size_t index)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Object__rosidl_typesupport_introspection_c__resize_function__Mesh__meshes(
  void * untyped_member, size_t size)
{
  shape_msgs__msg__Mesh__Sequence * member =
    (shape_msgs__msg__Mesh__Sequence *)(untyped_member);
  shape_msgs__msg__Mesh__Sequence__fini(member);
  return shape_msgs__msg__Mesh__Sequence__init(member, size);
}

size_t Object__rosidl_typesupport_introspection_c__size_function__Pose__mesh_poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * Object__rosidl_typesupport_introspection_c__get_const_function__Pose__mesh_poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Object__rosidl_typesupport_introspection_c__get_function__Pose__mesh_poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Object__rosidl_typesupport_introspection_c__resize_function__Pose__mesh_poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Object__rosidl_typesupport_introspection_c__Object_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "support_surface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, support_surface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, properties),  // bytes offset in struct
    NULL,  // default value
    Object__rosidl_typesupport_introspection_c__size_function__ObjectProperty__properties,  // size() function pointer
    Object__rosidl_typesupport_introspection_c__get_const_function__ObjectProperty__properties,  // get_const(index) function pointer
    Object__rosidl_typesupport_introspection_c__get_function__ObjectProperty__properties,  // get(index) function pointer
    Object__rosidl_typesupport_introspection_c__resize_function__ObjectProperty__properties  // resize(index) function pointer
  },
  {
    "point_cluster",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, point_cluster),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "primitives",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, primitives),  // bytes offset in struct
    NULL,  // default value
    Object__rosidl_typesupport_introspection_c__size_function__SolidPrimitive__primitives,  // size() function pointer
    Object__rosidl_typesupport_introspection_c__get_const_function__SolidPrimitive__primitives,  // get_const(index) function pointer
    Object__rosidl_typesupport_introspection_c__get_function__SolidPrimitive__primitives,  // get(index) function pointer
    Object__rosidl_typesupport_introspection_c__resize_function__SolidPrimitive__primitives  // resize(index) function pointer
  },
  {
    "primitive_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, primitive_poses),  // bytes offset in struct
    NULL,  // default value
    Object__rosidl_typesupport_introspection_c__size_function__Pose__primitive_poses,  // size() function pointer
    Object__rosidl_typesupport_introspection_c__get_const_function__Pose__primitive_poses,  // get_const(index) function pointer
    Object__rosidl_typesupport_introspection_c__get_function__Pose__primitive_poses,  // get(index) function pointer
    Object__rosidl_typesupport_introspection_c__resize_function__Pose__primitive_poses  // resize(index) function pointer
  },
  {
    "meshes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, meshes),  // bytes offset in struct
    NULL,  // default value
    Object__rosidl_typesupport_introspection_c__size_function__Mesh__meshes,  // size() function pointer
    Object__rosidl_typesupport_introspection_c__get_const_function__Mesh__meshes,  // get_const(index) function pointer
    Object__rosidl_typesupport_introspection_c__get_function__Mesh__meshes,  // get(index) function pointer
    Object__rosidl_typesupport_introspection_c__resize_function__Mesh__meshes  // resize(index) function pointer
  },
  {
    "mesh_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, mesh_poses),  // bytes offset in struct
    NULL,  // default value
    Object__rosidl_typesupport_introspection_c__size_function__Pose__mesh_poses,  // size() function pointer
    Object__rosidl_typesupport_introspection_c__get_const_function__Pose__mesh_poses,  // get_const(index) function pointer
    Object__rosidl_typesupport_introspection_c__get_function__Pose__mesh_poses,  // get(index) function pointer
    Object__rosidl_typesupport_introspection_c__resize_function__Pose__mesh_poses  // resize(index) function pointer
  },
  {
    "surface",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(grasping_msgs__msg__Object, surface),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Object__rosidl_typesupport_introspection_c__Object_message_members = {
  "grasping_msgs__msg",  // message namespace
  "Object",  // message name
  10,  // number of fields
  sizeof(grasping_msgs__msg__Object),
  Object__rosidl_typesupport_introspection_c__Object_message_member_array,  // message members
  Object__rosidl_typesupport_introspection_c__Object_init_function,  // function to initialize message memory (memory has to be allocated)
  Object__rosidl_typesupport_introspection_c__Object_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle = {
  0,
  &Object__rosidl_typesupport_introspection_c__Object_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, Object)() {
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, msg, ObjectProperty)();
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, SolidPrimitive)();
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Mesh)();
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  Object__rosidl_typesupport_introspection_c__Object_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Plane)();
  if (!Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle.typesupport_identifier) {
    Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Object__rosidl_typesupport_introspection_c__Object_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
