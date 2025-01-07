// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from grasping_msgs:action/FindGraspableObjects.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__BUILDER_HPP_
#define GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__BUILDER_HPP_

#include "grasping_msgs/action/detail/find_graspable_objects__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_Goal_plan_grasps
{
public:
  Init_FindGraspableObjects_Goal_plan_grasps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grasping_msgs::action::FindGraspableObjects_Goal plan_grasps(::grasping_msgs::action::FindGraspableObjects_Goal::_plan_grasps_type arg)
  {
    msg_.plan_grasps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_Goal>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_Goal_plan_grasps();
}

}  // namespace grasping_msgs


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_Result_support_surfaces
{
public:
  explicit Init_FindGraspableObjects_Result_support_surfaces(::grasping_msgs::action::FindGraspableObjects_Result & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::action::FindGraspableObjects_Result support_surfaces(::grasping_msgs::action::FindGraspableObjects_Result::_support_surfaces_type arg)
  {
    msg_.support_surfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_Result msg_;
};

class Init_FindGraspableObjects_Result_objects
{
public:
  Init_FindGraspableObjects_Result_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindGraspableObjects_Result_support_surfaces objects(::grasping_msgs::action::FindGraspableObjects_Result::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return Init_FindGraspableObjects_Result_support_surfaces(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_Result>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_Result_objects();
}

}  // namespace grasping_msgs


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_Feedback_object
{
public:
  Init_FindGraspableObjects_Feedback_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grasping_msgs::action::FindGraspableObjects_Feedback object(::grasping_msgs::action::FindGraspableObjects_Feedback::_object_type arg)
  {
    msg_.object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_Feedback>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_Feedback_object();
}

}  // namespace grasping_msgs


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_SendGoal_Request_goal
{
public:
  explicit Init_FindGraspableObjects_SendGoal_Request_goal(::grasping_msgs::action::FindGraspableObjects_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::action::FindGraspableObjects_SendGoal_Request goal(::grasping_msgs::action::FindGraspableObjects_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_SendGoal_Request msg_;
};

class Init_FindGraspableObjects_SendGoal_Request_goal_id
{
public:
  Init_FindGraspableObjects_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindGraspableObjects_SendGoal_Request_goal goal_id(::grasping_msgs::action::FindGraspableObjects_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FindGraspableObjects_SendGoal_Request_goal(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_SendGoal_Request>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_SendGoal_Request_goal_id();
}

}  // namespace grasping_msgs


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_SendGoal_Response_stamp
{
public:
  explicit Init_FindGraspableObjects_SendGoal_Response_stamp(::grasping_msgs::action::FindGraspableObjects_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::action::FindGraspableObjects_SendGoal_Response stamp(::grasping_msgs::action::FindGraspableObjects_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_SendGoal_Response msg_;
};

class Init_FindGraspableObjects_SendGoal_Response_accepted
{
public:
  Init_FindGraspableObjects_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindGraspableObjects_SendGoal_Response_stamp accepted(::grasping_msgs::action::FindGraspableObjects_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FindGraspableObjects_SendGoal_Response_stamp(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_SendGoal_Response>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_SendGoal_Response_accepted();
}

}  // namespace grasping_msgs


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_GetResult_Request_goal_id
{
public:
  Init_FindGraspableObjects_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::grasping_msgs::action::FindGraspableObjects_GetResult_Request goal_id(::grasping_msgs::action::FindGraspableObjects_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_GetResult_Request>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_GetResult_Request_goal_id();
}

}  // namespace grasping_msgs


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_GetResult_Response_result
{
public:
  explicit Init_FindGraspableObjects_GetResult_Response_result(::grasping_msgs::action::FindGraspableObjects_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::action::FindGraspableObjects_GetResult_Response result(::grasping_msgs::action::FindGraspableObjects_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_GetResult_Response msg_;
};

class Init_FindGraspableObjects_GetResult_Response_status
{
public:
  Init_FindGraspableObjects_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindGraspableObjects_GetResult_Response_result status(::grasping_msgs::action::FindGraspableObjects_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FindGraspableObjects_GetResult_Response_result(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_GetResult_Response>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_GetResult_Response_status();
}

}  // namespace grasping_msgs


namespace grasping_msgs
{

namespace action
{

namespace builder
{

class Init_FindGraspableObjects_FeedbackMessage_feedback
{
public:
  explicit Init_FindGraspableObjects_FeedbackMessage_feedback(::grasping_msgs::action::FindGraspableObjects_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::grasping_msgs::action::FindGraspableObjects_FeedbackMessage feedback(::grasping_msgs::action::FindGraspableObjects_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_FeedbackMessage msg_;
};

class Init_FindGraspableObjects_FeedbackMessage_goal_id
{
public:
  Init_FindGraspableObjects_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindGraspableObjects_FeedbackMessage_feedback goal_id(::grasping_msgs::action::FindGraspableObjects_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FindGraspableObjects_FeedbackMessage_feedback(msg_);
  }

private:
  ::grasping_msgs::action::FindGraspableObjects_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::grasping_msgs::action::FindGraspableObjects_FeedbackMessage>()
{
  return grasping_msgs::action::builder::Init_FindGraspableObjects_FeedbackMessage_goal_id();
}

}  // namespace grasping_msgs

#endif  // GRASPING_MSGS__ACTION__DETAIL__FIND_GRASPABLE_OBJECTS__BUILDER_HPP_
