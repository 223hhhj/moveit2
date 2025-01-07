// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from grasping_msgs:action/GraspPlanning.idl
// generated code does not contain a copyright notice

#ifndef GRASPING_MSGS__ACTION__DETAIL__GRASP_PLANNING__TRAITS_HPP_
#define GRASPING_MSGS__ACTION__DETAIL__GRASP_PLANNING__TRAITS_HPP_

#include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'object'
#include "grasping_msgs/msg/detail/object__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_Goal>()
{
  return "grasping_msgs::action::GraspPlanning_Goal";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_Goal>()
{
  return "grasping_msgs/action/GraspPlanning_Goal";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_Result>()
{
  return "grasping_msgs::action::GraspPlanning_Result";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_Result>()
{
  return "grasping_msgs/action/GraspPlanning_Result";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_Feedback>()
{
  return "grasping_msgs::action::GraspPlanning_Feedback";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_Feedback>()
{
  return "grasping_msgs/action/GraspPlanning_Feedback";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "grasping_msgs/action/detail/grasp_planning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_SendGoal_Request>()
{
  return "grasping_msgs::action::GraspPlanning_SendGoal_Request";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_SendGoal_Request>()
{
  return "grasping_msgs/action/GraspPlanning_SendGoal_Request";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<grasping_msgs::action::GraspPlanning_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<grasping_msgs::action::GraspPlanning_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_SendGoal_Response>()
{
  return "grasping_msgs::action::GraspPlanning_SendGoal_Response";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_SendGoal_Response>()
{
  return "grasping_msgs/action/GraspPlanning_SendGoal_Response";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_SendGoal>()
{
  return "grasping_msgs::action::GraspPlanning_SendGoal";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_SendGoal>()
{
  return "grasping_msgs/action/GraspPlanning_SendGoal";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<grasping_msgs::action::GraspPlanning_SendGoal_Request>::value &&
    has_fixed_size<grasping_msgs::action::GraspPlanning_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<grasping_msgs::action::GraspPlanning_SendGoal_Request>::value &&
    has_bounded_size<grasping_msgs::action::GraspPlanning_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<grasping_msgs::action::GraspPlanning_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<grasping_msgs::action::GraspPlanning_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<grasping_msgs::action::GraspPlanning_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_GetResult_Request>()
{
  return "grasping_msgs::action::GraspPlanning_GetResult_Request";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_GetResult_Request>()
{
  return "grasping_msgs/action/GraspPlanning_GetResult_Request";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_GetResult_Response>()
{
  return "grasping_msgs::action::GraspPlanning_GetResult_Response";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_GetResult_Response>()
{
  return "grasping_msgs/action/GraspPlanning_GetResult_Response";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<grasping_msgs::action::GraspPlanning_Result>::value> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<grasping_msgs::action::GraspPlanning_Result>::value> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_GetResult>()
{
  return "grasping_msgs::action::GraspPlanning_GetResult";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_GetResult>()
{
  return "grasping_msgs/action/GraspPlanning_GetResult";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<grasping_msgs::action::GraspPlanning_GetResult_Request>::value &&
    has_fixed_size<grasping_msgs::action::GraspPlanning_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<grasping_msgs::action::GraspPlanning_GetResult_Request>::value &&
    has_bounded_size<grasping_msgs::action::GraspPlanning_GetResult_Response>::value
  >
{
};

template<>
struct is_service<grasping_msgs::action::GraspPlanning_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<grasping_msgs::action::GraspPlanning_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<grasping_msgs::action::GraspPlanning_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<grasping_msgs::action::GraspPlanning_FeedbackMessage>()
{
  return "grasping_msgs::action::GraspPlanning_FeedbackMessage";
}

template<>
inline const char * name<grasping_msgs::action::GraspPlanning_FeedbackMessage>()
{
  return "grasping_msgs/action/GraspPlanning_FeedbackMessage";
}

template<>
struct has_fixed_size<grasping_msgs::action::GraspPlanning_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<grasping_msgs::action::GraspPlanning_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<grasping_msgs::action::GraspPlanning_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<grasping_msgs::action::GraspPlanning_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<grasping_msgs::action::GraspPlanning_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<grasping_msgs::action::GraspPlanning>
  : std::true_type
{
};

template<>
struct is_action_goal<grasping_msgs::action::GraspPlanning_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<grasping_msgs::action::GraspPlanning_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<grasping_msgs::action::GraspPlanning_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // GRASPING_MSGS__ACTION__DETAIL__GRASP_PLANNING__TRAITS_HPP_
