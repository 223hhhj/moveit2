// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from grasping_msgs:action/FindGraspableObjects.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_Goal_type_support_ids_t;

static const _FindGraspableObjects_Goal_type_support_ids_t _FindGraspableObjects_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_Goal_type_support_symbol_names_t _FindGraspableObjects_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Goal)),
  }
};

typedef struct _FindGraspableObjects_Goal_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_Goal_type_support_data_t;

static _FindGraspableObjects_Goal_type_support_data_t _FindGraspableObjects_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_Goal_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_Goal)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_Result_type_support_ids_t;

static const _FindGraspableObjects_Result_type_support_ids_t _FindGraspableObjects_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_Result_type_support_symbol_names_t _FindGraspableObjects_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Result)),
  }
};

typedef struct _FindGraspableObjects_Result_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_Result_type_support_data_t;

static _FindGraspableObjects_Result_type_support_data_t _FindGraspableObjects_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_Result_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_Result_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_Result_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_Result)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_Feedback_type_support_ids_t;

static const _FindGraspableObjects_Feedback_type_support_ids_t _FindGraspableObjects_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_Feedback_type_support_symbol_names_t _FindGraspableObjects_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_Feedback)),
  }
};

typedef struct _FindGraspableObjects_Feedback_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_Feedback_type_support_data_t;

static _FindGraspableObjects_Feedback_type_support_data_t _FindGraspableObjects_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_Feedback_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_Feedback)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_SendGoal_Request_type_support_ids_t;

static const _FindGraspableObjects_SendGoal_Request_type_support_ids_t _FindGraspableObjects_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_SendGoal_Request_type_support_symbol_names_t _FindGraspableObjects_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)),
  }
};

typedef struct _FindGraspableObjects_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_SendGoal_Request_type_support_data_t;

static _FindGraspableObjects_SendGoal_Request_type_support_data_t _FindGraspableObjects_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_SendGoal_Request_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Request)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_SendGoal_Response_type_support_ids_t;

static const _FindGraspableObjects_SendGoal_Response_type_support_ids_t _FindGraspableObjects_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_SendGoal_Response_type_support_symbol_names_t _FindGraspableObjects_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)),
  }
};

typedef struct _FindGraspableObjects_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_SendGoal_Response_type_support_data_t;

static _FindGraspableObjects_SendGoal_Response_type_support_data_t _FindGraspableObjects_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_SendGoal_Response_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_SendGoal_Response)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_SendGoal_type_support_ids_t;

static const _FindGraspableObjects_SendGoal_type_support_ids_t _FindGraspableObjects_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_SendGoal_type_support_symbol_names_t _FindGraspableObjects_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_SendGoal)),
  }
};

typedef struct _FindGraspableObjects_SendGoal_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_SendGoal_type_support_data_t;

static _FindGraspableObjects_SendGoal_type_support_data_t _FindGraspableObjects_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_SendGoal_service_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FindGraspableObjects_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_SendGoal)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_GetResult_Request_type_support_ids_t;

static const _FindGraspableObjects_GetResult_Request_type_support_ids_t _FindGraspableObjects_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_GetResult_Request_type_support_symbol_names_t _FindGraspableObjects_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)),
  }
};

typedef struct _FindGraspableObjects_GetResult_Request_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_GetResult_Request_type_support_data_t;

static _FindGraspableObjects_GetResult_Request_type_support_data_t _FindGraspableObjects_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_GetResult_Request_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_GetResult_Request)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_GetResult_Response_type_support_ids_t;

static const _FindGraspableObjects_GetResult_Response_type_support_ids_t _FindGraspableObjects_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_GetResult_Response_type_support_symbol_names_t _FindGraspableObjects_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)),
  }
};

typedef struct _FindGraspableObjects_GetResult_Response_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_GetResult_Response_type_support_data_t;

static _FindGraspableObjects_GetResult_Response_type_support_data_t _FindGraspableObjects_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_GetResult_Response_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_GetResult_Response)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_GetResult_type_support_ids_t;

static const _FindGraspableObjects_GetResult_type_support_ids_t _FindGraspableObjects_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_GetResult_type_support_symbol_names_t _FindGraspableObjects_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_GetResult)),
  }
};

typedef struct _FindGraspableObjects_GetResult_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_GetResult_type_support_data_t;

static _FindGraspableObjects_GetResult_type_support_data_t _FindGraspableObjects_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_GetResult_service_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FindGraspableObjects_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_GetResult)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "grasping_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "grasping_msgs/action/detail/find_graspable_objects__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace grasping_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _FindGraspableObjects_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FindGraspableObjects_FeedbackMessage_type_support_ids_t;

static const _FindGraspableObjects_FeedbackMessage_type_support_ids_t _FindGraspableObjects_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FindGraspableObjects_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FindGraspableObjects_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FindGraspableObjects_FeedbackMessage_type_support_symbol_names_t _FindGraspableObjects_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, grasping_msgs, action, FindGraspableObjects_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, grasping_msgs, action, FindGraspableObjects_FeedbackMessage)),
  }
};

typedef struct _FindGraspableObjects_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _FindGraspableObjects_FeedbackMessage_type_support_data_t;

static _FindGraspableObjects_FeedbackMessage_type_support_data_t _FindGraspableObjects_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FindGraspableObjects_FeedbackMessage_message_typesupport_map = {
  2,
  "grasping_msgs",
  &_FindGraspableObjects_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_FindGraspableObjects_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_FindGraspableObjects_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FindGraspableObjects_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FindGraspableObjects_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace grasping_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_FeedbackMessage)() {
  return &::grasping_msgs::action::rosidl_typesupport_c::FindGraspableObjects_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "grasping_msgs/action/find_graspable_objects.h"
#include "grasping_msgs/action/detail/find_graspable_objects__type_support.h"

static rosidl_action_type_support_t _grasping_msgs__action__FindGraspableObjects__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_grasping_msgs
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects)()
{
  // Thread-safe by always writing the same values to the static struct
  _grasping_msgs__action__FindGraspableObjects__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_SendGoal)();
  _grasping_msgs__action__FindGraspableObjects__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_GetResult)();
  _grasping_msgs__action__FindGraspableObjects__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _grasping_msgs__action__FindGraspableObjects__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, grasping_msgs, action, FindGraspableObjects_FeedbackMessage)();
  _grasping_msgs__action__FindGraspableObjects__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_grasping_msgs__action__FindGraspableObjects__typesupport_c;
}

#ifdef __cplusplus
}
#endif
