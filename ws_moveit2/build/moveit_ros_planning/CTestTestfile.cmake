# CMake generated Testfile for 
# Source directory: /home/steven/ws_moveit2/src/moveit2/moveit_ros/planning
# Build directory: /home/steven/ws_moveit2/build/moveit_ros_planning
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[cppcheck]=] "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/cppcheck.xunit.xml" "--package-name" "moveit_ros_planning" "--output-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/humble/bin/ament_cppcheck" "--xunit-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/cppcheck.xunit.xml" "--include_dirs" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/rdf_loader/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/kinematics_plugin_loader/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/robot_model_loader/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/constraint_sampler_manager_loader/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/planning_pipeline/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/planning_scene_monitor/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/trajectory_execution_manager/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/plan_execution/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/collision_plugin_loader/include" "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/moveit_cpp/include")
set_tests_properties([=[cppcheck]=] PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;66;ament_add_test;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;87;ament_cppcheck;/opt/ros/humble/share/ament_cmake_cppcheck/cmake/ament_cmake_cppcheck_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;118;ament_package;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;0;")
add_test([=[lint_cmake]=] "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/lint_cmake.xunit.xml" "--package-name" "moveit_ros_planning" "--output-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/humble/bin/ament_lint_cmake" "--xunit-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/lint_cmake.xunit.xml")
set_tests_properties([=[lint_cmake]=] PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/humble/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;118;ament_package;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;0;")
add_test([=[pep257]=] "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/pep257.xunit.xml" "--package-name" "moveit_ros_planning" "--output-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/ament_pep257/pep257.txt" "--command" "/opt/ros/humble/bin/ament_pep257" "--xunit-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/pep257.xunit.xml")
set_tests_properties([=[pep257]=] PROPERTIES  LABELS "pep257;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_pep257.cmake;41;ament_add_test;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;18;ament_pep257;/opt/ros/humble/share/ament_cmake_pep257/cmake/ament_cmake_pep257_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;118;ament_package;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;0;")
add_test([=[xmllint]=] "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/xmllint.xunit.xml" "--package-name" "moveit_ros_planning" "--output-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/ament_xmllint/xmllint.txt" "--command" "/opt/ros/humble/bin/ament_xmllint" "--xunit-file" "/home/steven/ws_moveit2/build/moveit_ros_planning/test_results/moveit_ros_planning/xmllint.xunit.xml")
set_tests_properties([=[xmllint]=] PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/humble/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;118;ament_package;/home/steven/ws_moveit2/src/moveit2/moveit_ros/planning/CMakeLists.txt;0;")
subdirs("rdf_loader")
subdirs("collision_plugin_loader")
subdirs("kinematics_plugin_loader")
subdirs("robot_model_loader")
subdirs("constraint_sampler_manager_loader")
subdirs("planning_pipeline")
subdirs("planning_request_adapter_plugins")
subdirs("planning_scene_monitor")
subdirs("planning_components_tools")
subdirs("trajectory_execution_manager")
subdirs("plan_execution")
subdirs("moveit_cpp")
