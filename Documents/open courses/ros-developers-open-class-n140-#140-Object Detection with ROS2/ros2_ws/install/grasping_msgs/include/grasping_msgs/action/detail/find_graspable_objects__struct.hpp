// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from grasping_msgs:action/FindGraspableObjects.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__STRUCT_HPP_
#define GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_Goal __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_Goal __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_Goal_
{
  using Type = FindGraspableObjects_Goal_<ContainerAllocator>;

  explicit FindGraspableObjects_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_grasps = false;
    }
  }

  explicit FindGraspableObjects_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_grasps = false;
    }
  }

  // field types and members
  using _plan_grasps_type =
    bool;
  _plan_grasps_type plan_grasps;

  // setters for named parameter idiom
  Type & set__plan_grasps(
    const bool & _arg)
  {
    this->plan_grasps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_Goal
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_Goal
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_Goal_ & other) const
  {
    if (this->plan_grasps != other.plan_grasps) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_Goal_

// alias to use template instance with default allocator
using FindGraspableObjects_Goal =
  grasping_msgs::action::FindGraspableObjects_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs


// Include directives for member types
// Member 'objects'
#include "grasping_msgs/msg/detail/graspable_object__struct.hpp"
// Member 'support_surfaces'
#include "grasping_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_Result __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_Result __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_Result_
{
  using Type = FindGraspableObjects_Result_<ContainerAllocator>;

  explicit FindGraspableObjects_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit FindGraspableObjects_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_type =
    std::vector<grasping_msgs::msg::GraspableObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasping_msgs::msg::GraspableObject_<ContainerAllocator>>::other>;
  _objects_type objects;
  using _support_surfaces_type =
    std::vector<grasping_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasping_msgs::msg::Object_<ContainerAllocator>>::other>;
  _support_surfaces_type support_surfaces;

  // setters for named parameter idiom
  Type & set__objects(
    const std::vector<grasping_msgs::msg::GraspableObject_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasping_msgs::msg::GraspableObject_<ContainerAllocator>>::other> & _arg)
  {
    this->objects = _arg;
    return *this;
  }
  Type & set__support_surfaces(
    const std::vector<grasping_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<grasping_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->support_surfaces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_Result
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_Result
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_Result_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    if (this->support_surfaces != other.support_surfaces) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_Result_

// alias to use template instance with default allocator
using FindGraspableObjects_Result =
  grasping_msgs::action::FindGraspableObjects_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs


// Include directives for member types
// Member 'object'
// already included above
// #include "grasping_msgs/msg/detail/graspable_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_Feedback __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_Feedback_
{
  using Type = FindGraspableObjects_Feedback_<ContainerAllocator>;

  explicit FindGraspableObjects_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_init)
  {
    (void)_init;
  }

  explicit FindGraspableObjects_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : object(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _object_type =
    grasping_msgs::msg::GraspableObject_<ContainerAllocator>;
  _object_type object;

  // setters for named parameter idiom
  Type & set__object(
    const grasping_msgs::msg::GraspableObject_<ContainerAllocator> & _arg)
  {
    this->object = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_Feedback
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_Feedback
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_Feedback_ & other) const
  {
    if (this->object != other.object) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_Feedback_

// alias to use template instance with default allocator
using FindGraspableObjects_Feedback =
  grasping_msgs::action::FindGraspableObjects_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Request __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_SendGoal_Request_
{
  using Type = FindGraspableObjects_SendGoal_Request_<ContainerAllocator>;

  explicit FindGraspableObjects_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit FindGraspableObjects_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const grasping_msgs::action::FindGraspableObjects_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Request
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Request
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_SendGoal_Request_

// alias to use template instance with default allocator
using FindGraspableObjects_SendGoal_Request =
  grasping_msgs::action::FindGraspableObjects_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Response __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_SendGoal_Response_
{
  using Type = FindGraspableObjects_SendGoal_Response_<ContainerAllocator>;

  explicit FindGraspableObjects_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit FindGraspableObjects_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Response
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_SendGoal_Response
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_SendGoal_Response_

// alias to use template instance with default allocator
using FindGraspableObjects_SendGoal_Response =
  grasping_msgs::action::FindGraspableObjects_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs

namespace grasping_msgs
{

namespace action
{

struct FindGraspableObjects_SendGoal
{
  using Request = grasping_msgs::action::FindGraspableObjects_SendGoal_Request;
  using Response = grasping_msgs::action::FindGraspableObjects_SendGoal_Response;
};

}  // namespace action

}  // namespace grasping_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Request __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_GetResult_Request_
{
  using Type = FindGraspableObjects_GetResult_Request_<ContainerAllocator>;

  explicit FindGraspableObjects_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit FindGraspableObjects_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Request
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Request
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_GetResult_Request_

// alias to use template instance with default allocator
using FindGraspableObjects_GetResult_Request =
  grasping_msgs::action::FindGraspableObjects_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Response __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_GetResult_Response_
{
  using Type = FindGraspableObjects_GetResult_Response_<ContainerAllocator>;

  explicit FindGraspableObjects_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit FindGraspableObjects_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const grasping_msgs::action::FindGraspableObjects_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Response
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_GetResult_Response
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_GetResult_Response_

// alias to use template instance with default allocator
using FindGraspableObjects_GetResult_Response =
  grasping_msgs::action::FindGraspableObjects_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs

namespace grasping_msgs
{

namespace action
{

struct FindGraspableObjects_GetResult
{
  using Request = grasping_msgs::action::FindGraspableObjects_GetResult_Request;
  using Response = grasping_msgs::action::FindGraspableObjects_GetResult_Response;
};

}  // namespace action

}  // namespace grasping_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__grasping_msgs__action__FindGraspableObjects_FeedbackMessage __declspec(deprecated)
#endif

namespace grasping_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct FindGraspableObjects_FeedbackMessage_
{
  using Type = FindGraspableObjects_FeedbackMessage_<ContainerAllocator>;

  explicit FindGraspableObjects_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit FindGraspableObjects_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const grasping_msgs::action::FindGraspableObjects_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_FeedbackMessage
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__grasping_msgs__action__FindGraspableObjects_FeedbackMessage
    std::shared_ptr<grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FindGraspableObjects_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const FindGraspableObjects_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FindGraspableObjects_FeedbackMessage_

// alias to use template instance with default allocator
using FindGraspableObjects_FeedbackMessage =
  grasping_msgs::action::FindGraspableObjects_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace grasping_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace grasping_msgs
{

namespace action
{

struct FindGraspableObjects
{
  /// The goal message defined in the action definition.
  using Goal = grasping_msgs::action::FindGraspableObjects_Goal;
  /// The result message defined in the action definition.
  using Result = grasping_msgs::action::FindGraspableObjects_Result;
  /// The feedback message defined in the action definition.
  using Feedback = grasping_msgs::action::FindGraspableObjects_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = grasping_msgs::action::FindGraspableObjects_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = grasping_msgs::action::FindGraspableObjects_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = grasping_msgs::action::FindGraspableObjects_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct FindGraspableObjects FindGraspableObjects;

}  // namespace action

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__STRUCT_HPP_
