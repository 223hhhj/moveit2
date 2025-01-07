// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grasping_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define GRASPING_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'properties'
#include "grasping_msgs/msg/detail/object_property__struct.hpp"
// Member 'point_cluster'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'primitives'
#include "shape_msgs/msg/detail/solid_primitive__struct.hpp"
// Member 'primitive_poses'
// Member 'mesh_poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'meshes'
#include "shape_msgs/msg/detail/mesh__struct.hpp"
// Member 'surface'
#include "shape_msgs/msg/detail/plane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__msg__Object __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    point_cluster(_init),
    surface(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->support_surface = "";
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    name(_alloc),
    support_surface(_alloc),
    point_cluster(_alloc, _init),
    surface(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->support_surface = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _support_surface_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _support_surface_type support_surface;
  using _properties_type =
    std::vector<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>>::other>;
  _properties_type properties;
  using _point_cluster_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _point_cluster_type point_cluster;
  using _primitives_type =
    std::vector<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>::other>;
  _primitives_type primitives;
  using _primitive_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _primitive_poses_type primitive_poses;
  using _meshes_type =
    std::vector<shape_msgs::msg::Mesh_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::Mesh_<ContainerAllocator>>::other>;
  _meshes_type meshes;
  using _mesh_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _mesh_poses_type mesh_poses;
  using _surface_type =
    shape_msgs::msg::Plane_<ContainerAllocator>;
  _surface_type surface;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__support_surface(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->support_surface = _arg;
    return *this;
  }
  Type & set__properties(
    const std::vector<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasping_msgs::msg::ObjectProperty_<ContainerAllocator>>::other> & _arg)
  {
    this->properties = _arg;
    return *this;
  }
  Type & set__point_cluster(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->point_cluster = _arg;
    return *this;
  }
  Type & set__primitives(
    const std::vector<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>::other> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }
  Type & set__primitive_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->primitive_poses = _arg;
    return *this;
  }
  Type & set__meshes(
    const std::vector<shape_msgs::msg::Mesh_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::Mesh_<ContainerAllocator>>::other> & _arg)
  {
    this->meshes = _arg;
    return *this;
  }
  Type & set__mesh_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->mesh_poses = _arg;
    return *this;
  }
  Type & set__surface(
    const shape_msgs::msg::Plane_<ContainerAllocator> & _arg)
  {
    this->surface = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__msg__Object
    std::shared_ptr<grasping_msgs::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__msg__Object
    std::shared_ptr<grasping_msgs::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->support_surface != other.support_surface) {
      return false;
    }
    if (this->properties != other.properties) {
      return false;
    }
    if (this->point_cluster != other.point_cluster) {
      return false;
    }
    if (this->primitives != other.primitives) {
      return false;
    }
    if (this->primitive_poses != other.primitive_poses) {
      return false;
    }
    if (this->meshes != other.meshes) {
      return false;
    }
    if (this->mesh_poses != other.mesh_poses) {
      return false;
    }
    if (this->surface != other.surface) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  grasping_msgs::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
