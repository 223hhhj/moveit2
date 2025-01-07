execute_process(COMMAND "/home/user/simulation_ws/build/ur_workshop/gazebo_ros_pkgs_new/gazebo_plugins_new/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/user/simulation_ws/build/ur_workshop/gazebo_ros_pkgs_new/gazebo_plugins_new/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
