// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from grasping_msgs:action/GraspPlanning.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_Goal_type_support_ids_t;

static const _GraspPlanning_Goal_type_support_ids_t _GraspPlanning_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_Goal_type_support_symbol_names_t _GraspPlanning_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_Goal)),
  }
};

typedef struct _GraspPlanning_Goal_type_support_data_t
{
  void * data[2];
} _GraspPlanning_Goal_type_support_data_t;

static _GraspPlanning_Goal_type_support_data_t _GraspPlanning_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_Goal_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_Goal>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_Goal)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_Result_type_support_ids_t;

static const _GraspPlanning_Result_type_support_ids_t _GraspPlanning_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_Result_type_support_symbol_names_t _GraspPlanning_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_Result)),
  }
};

typedef struct _GraspPlanning_Result_type_support_data_t
{
  void * data[2];
} _GraspPlanning_Result_type_support_data_t;

static _GraspPlanning_Result_type_support_data_t _GraspPlanning_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_Result_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_Result_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_Result_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_Result>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_Result)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_Feedback_type_support_ids_t;

static const _GraspPlanning_Feedback_type_support_ids_t _GraspPlanning_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_Feedback_type_support_symbol_names_t _GraspPlanning_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_Feedback)),
  }
};

typedef struct _GraspPlanning_Feedback_type_support_data_t
{
  void * data[2];
} _GraspPlanning_Feedback_type_support_data_t;

static _GraspPlanning_Feedback_type_support_data_t _GraspPlanning_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_Feedback_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_Feedback>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_Feedback)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_SendGoal_Request_type_support_ids_t;

static const _GraspPlanning_SendGoal_Request_type_support_ids_t _GraspPlanning_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_SendGoal_Request_type_support_symbol_names_t _GraspPlanning_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_SendGoal_Request)),
  }
};

typedef struct _GraspPlanning_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _GraspPlanning_SendGoal_Request_type_support_data_t;

static _GraspPlanning_SendGoal_Request_type_support_data_t _GraspPlanning_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_SendGoal_Request_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_SendGoal_Request>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_SendGoal_Request)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_SendGoal_Response_type_support_ids_t;

static const _GraspPlanning_SendGoal_Response_type_support_ids_t _GraspPlanning_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_SendGoal_Response_type_support_symbol_names_t _GraspPlanning_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_SendGoal_Response)),
  }
};

typedef struct _GraspPlanning_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _GraspPlanning_SendGoal_Response_type_support_data_t;

static _GraspPlanning_SendGoal_Response_type_support_data_t _GraspPlanning_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_SendGoal_Response_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_SendGoal_Response>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_SendGoal_Response)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_SendGoal_type_support_ids_t;

static const _GraspPlanning_SendGoal_type_support_ids_t _GraspPlanning_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_SendGoal_type_support_symbol_names_t _GraspPlanning_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_SendGoal)),
  }
};

typedef struct _GraspPlanning_SendGoal_type_support_data_t
{
  void * data[2];
} _GraspPlanning_SendGoal_type_support_data_t;

static _GraspPlanning_SendGoal_type_support_data_t _GraspPlanning_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_SendGoal_service_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GraspPlanning_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<grasping_msgs::action::GraspPlanning_SendGoal>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_GetResult_Request_type_support_ids_t;

static const _GraspPlanning_GetResult_Request_type_support_ids_t _GraspPlanning_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_GetResult_Request_type_support_symbol_names_t _GraspPlanning_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_GetResult_Request)),
  }
};

typedef struct _GraspPlanning_GetResult_Request_type_support_data_t
{
  void * data[2];
} _GraspPlanning_GetResult_Request_type_support_data_t;

static _GraspPlanning_GetResult_Request_type_support_data_t _GraspPlanning_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_GetResult_Request_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_GetResult_Request>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_GetResult_Request)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_GetResult_Response_type_support_ids_t;

static const _GraspPlanning_GetResult_Response_type_support_ids_t _GraspPlanning_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_GetResult_Response_type_support_symbol_names_t _GraspPlanning_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_GetResult_Response)),
  }
};

typedef struct _GraspPlanning_GetResult_Response_type_support_data_t
{
  void * data[2];
} _GraspPlanning_GetResult_Response_type_support_data_t;

static _GraspPlanning_GetResult_Response_type_support_data_t _GraspPlanning_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_GetResult_Response_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_GetResult_Response>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_GetResult_Response)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_GetResult_type_support_ids_t;

static const _GraspPlanning_GetResult_type_support_ids_t _GraspPlanning_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_GetResult_type_support_symbol_names_t _GraspPlanning_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_GetResult)),
  }
};

typedef struct _GraspPlanning_GetResult_type_support_data_t
{
  void * data[2];
} _GraspPlanning_GetResult_type_support_data_t;

static _GraspPlanning_GetResult_type_support_data_t _GraspPlanning_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_GetResult_service_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GraspPlanning_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<grasping_msgs::action::GraspPlanning_GetResult>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _GraspPlanning_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GraspPlanning_FeedbackMessage_type_support_ids_t;

static const _GraspPlanning_FeedbackMessage_type_support_ids_t _GraspPlanning_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GraspPlanning_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GraspPlanning_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GraspPlanning_FeedbackMessage_type_support_symbol_names_t _GraspPlanning_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, grasping_msgs, action, GraspPlanning_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, grasping_msgs, action, GraspPlanning_FeedbackMessage)),
  }
};

typedef struct _GraspPlanning_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _GraspPlanning_FeedbackMessage_type_support_data_t;

static _GraspPlanning_FeedbackMessage_type_support_data_t _GraspPlanning_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GraspPlanning_FeedbackMessage_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_GraspPlanning_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_GraspPlanning_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_GraspPlanning_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GraspPlanning_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GraspPlanning_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<grasping_msgs::action::GraspPlanning_FeedbackMessage>()
{
  return &::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, grasping_msgs, action, GraspPlanning_FeedbackMessage)() {
  return get_message_type_support_handle<grasping_msgs::action::GraspPlanning_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "grasping_msgs/action/detail/grasp_planning__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t GraspPlanning_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace grasping_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<grasping_msgs::action::GraspPlanning>()
{
  using ::grasping_msgs::action::rosidl_typesupport_cpp::GraspPlanning_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  GraspPlanning_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::grasping_msgs::action::GraspPlanning::Impl::SendGoalService>();
  GraspPlanning_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::grasping_msgs::action::GraspPlanning::Impl::GetResultService>();
  GraspPlanning_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::grasping_msgs::action::GraspPlanning::Impl::CancelGoalService>();
  GraspPlanning_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::grasping_msgs::action::GraspPlanning::Impl::FeedbackMessage>();
  GraspPlanning_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::grasping_msgs::action::GraspPlanning::Impl::GoalStatusMessage>();
  return &GraspPlanning_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
