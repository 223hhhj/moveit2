# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "gazebo_msgs_new: 9 messages, 23 services")

set(MSG_I_FLAGS "-Igazebo_msgs_new:/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg;-Itrajectory_msgs:/opt/ros/noetic/share/trajectory_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(gazebo_msgs_new_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg" "gazebo_msgs_new/ContactState:std_msgs/Header:geometry_msgs/Wrench:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg" "geometry_msgs/Wrench:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Wrench"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv" "geometry_msgs/Vector3:geometry_msgs/Wrench:geometry_msgs/Point"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Quaternion:gazebo_msgs_new/LinkState"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv" "gazebo_msgs_new/ODEPhysics:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv" "gazebo_msgs_new/ODEJointProperties"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv" "geometry_msgs/Quaternion:geometry_msgs/Pose:geometry_msgs/Point"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv" "geometry_msgs/Quaternion:geometry_msgs/Pose:geometry_msgs/Point"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv" "geometry_msgs/Pose:gazebo_msgs_new/ModelState:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv" "geometry_msgs/Quaternion:geometry_msgs/Pose:geometry_msgs/Point"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:std_msgs/Header:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv" ""
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv" "geometry_msgs/Pose:geometry_msgs/Twist:geometry_msgs/Point:geometry_msgs/Vector3:geometry_msgs/Quaternion:gazebo_msgs_new/LinkState"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv" "gazebo_msgs_new/ODEPhysics:geometry_msgs/Vector3"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv" "trajectory_msgs/JointTrajectoryPoint:geometry_msgs/Pose:geometry_msgs/Point:trajectory_msgs/JointTrajectory:std_msgs/Header:geometry_msgs/Quaternion"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv" "std_msgs/ColorRGBA"
)

get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv" NAME_WE)
add_custom_target(_gazebo_msgs_new_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "gazebo_msgs_new" "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv" "std_msgs/ColorRGBA"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Services
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_cpp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Module File
_generate_module_cpp(gazebo_msgs_new
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(gazebo_msgs_new_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(gazebo_msgs_new_generate_messages gazebo_msgs_new_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_cpp _gazebo_msgs_new_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(gazebo_msgs_new_gencpp)
add_dependencies(gazebo_msgs_new_gencpp gazebo_msgs_new_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS gazebo_msgs_new_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Services
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_eus(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Module File
_generate_module_eus(gazebo_msgs_new
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(gazebo_msgs_new_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(gazebo_msgs_new_generate_messages gazebo_msgs_new_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_eus _gazebo_msgs_new_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(gazebo_msgs_new_geneus)
add_dependencies(gazebo_msgs_new_geneus gazebo_msgs_new_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS gazebo_msgs_new_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Services
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_lisp(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Module File
_generate_module_lisp(gazebo_msgs_new
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(gazebo_msgs_new_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(gazebo_msgs_new_generate_messages gazebo_msgs_new_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_lisp _gazebo_msgs_new_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(gazebo_msgs_new_genlisp)
add_dependencies(gazebo_msgs_new_genlisp gazebo_msgs_new_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS gazebo_msgs_new_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Services
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_nodejs(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Module File
_generate_module_nodejs(gazebo_msgs_new
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(gazebo_msgs_new_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(gazebo_msgs_new_generate_messages gazebo_msgs_new_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_nodejs _gazebo_msgs_new_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(gazebo_msgs_new_gennodejs)
add_dependencies(gazebo_msgs_new_gennodejs gazebo_msgs_new_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS gazebo_msgs_new_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_msg_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Services
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Wrench.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Twist.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv"
  "${MSG_I_FLAGS}"
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Vector3.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectoryPoint.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/opt/ros/noetic/share/trajectory_msgs/cmake/../msg/JointTrajectory.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)
_generate_srv_py(gazebo_msgs_new
  "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/std_msgs/cmake/../msg/ColorRGBA.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
)

### Generating Module File
_generate_module_py(gazebo_msgs_new
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(gazebo_msgs_new_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(gazebo_msgs_new_generate_messages gazebo_msgs_new_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactsState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ContactState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/LinkStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ModelStates.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEJointProperties.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/ODEPhysics.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/msg/WorldState.msg" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyBodyWrench.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/DeleteLight.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelConfiguration.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SpawnModel.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/ApplyJointEffort.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetJointProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetWorldProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/BodyRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLinkProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetModelState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/JointRequest.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLinkState.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetPhysicsProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetJointTrajectory.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/GetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/user/simulation_ws/src/ur_workshop/gazebo_ros_pkgs_new/gazebo_msgs_new/srv/SetLightProperties.srv" NAME_WE)
add_dependencies(gazebo_msgs_new_generate_messages_py _gazebo_msgs_new_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(gazebo_msgs_new_genpy)
add_dependencies(gazebo_msgs_new_genpy gazebo_msgs_new_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS gazebo_msgs_new_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/gazebo_msgs_new
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(gazebo_msgs_new_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(gazebo_msgs_new_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(gazebo_msgs_new_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET trajectory_msgs_generate_messages_cpp)
  add_dependencies(gazebo_msgs_new_generate_messages_cpp trajectory_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/gazebo_msgs_new
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(gazebo_msgs_new_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(gazebo_msgs_new_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(gazebo_msgs_new_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()
if(TARGET trajectory_msgs_generate_messages_eus)
  add_dependencies(gazebo_msgs_new_generate_messages_eus trajectory_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/gazebo_msgs_new
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(gazebo_msgs_new_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(gazebo_msgs_new_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(gazebo_msgs_new_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()
if(TARGET trajectory_msgs_generate_messages_lisp)
  add_dependencies(gazebo_msgs_new_generate_messages_lisp trajectory_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/gazebo_msgs_new
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(gazebo_msgs_new_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(gazebo_msgs_new_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(gazebo_msgs_new_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()
if(TARGET trajectory_msgs_generate_messages_nodejs)
  add_dependencies(gazebo_msgs_new_generate_messages_nodejs trajectory_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/gazebo_msgs_new
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(gazebo_msgs_new_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(gazebo_msgs_new_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(gazebo_msgs_new_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET trajectory_msgs_generate_messages_py)
  add_dependencies(gazebo_msgs_new_generate_messages_py trajectory_msgs_generate_messages_py)
endif()
