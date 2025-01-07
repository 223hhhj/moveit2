// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grasping_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include "grasping_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace grasping_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_surface
{
public:
  explicit Init_Object_surface(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::msg::Object surface(::grasping_msgs::msg::Object::_surface_type arg)
  {
    msg_.surface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_mesh_poses
{
public:
  explicit Init_Object_mesh_poses(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_surface mesh_poses(::grasping_msgs::msg::Object::_mesh_poses_type arg)
  {
    msg_.mesh_poses = std::move(arg);
    return Init_Object_surface(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_meshes
{
public:
  explicit Init_Object_meshes(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_mesh_poses meshes(::grasping_msgs::msg::Object::_meshes_type arg)
  {
    msg_.meshes = std::move(arg);
    return Init_Object_mesh_poses(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_primitive_poses
{
public:
  explicit Init_Object_primitive_poses(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_meshes primitive_poses(::grasping_msgs::msg::Object::_primitive_poses_type arg)
  {
    msg_.primitive_poses = std::move(arg);
    return Init_Object_meshes(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_primitives
{
public:
  explicit Init_Object_primitives(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_primitive_poses primitives(::grasping_msgs::msg::Object::_primitives_type arg)
  {
    msg_.primitives = std::move(arg);
    return Init_Object_primitive_poses(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_point_cluster
{
public:
  explicit Init_Object_point_cluster(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_primitives point_cluster(::grasping_msgs::msg::Object::_point_cluster_type arg)
  {
    msg_.point_cluster = std::move(arg);
    return Init_Object_primitives(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_properties
{
public:
  explicit Init_Object_properties(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_point_cluster properties(::grasping_msgs::msg::Object::_properties_type arg)
  {
    msg_.properties = std::move(arg);
    return Init_Object_point_cluster(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_support_surface
{
public:
  explicit Init_Object_support_surface(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_properties support_surface(::grasping_msgs::msg::Object::_support_surface_type arg)
  {
    msg_.support_surface = std::move(arg);
    return Init_Object_properties(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_name
{
public:
  explicit Init_Object_name(::grasping_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_support_surface name(::grasping_msgs::msg::Object::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Object_support_surface(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

class Init_Object_header
{
public:
  Init_Object_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_name header(::grasping_msgs::msg::Object::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Object_name(msg_);
  }

private:
  ::grasping_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::msg::Object>()
{
  return grasping_msgs::msg::builder::Init_Object_header();
}

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
