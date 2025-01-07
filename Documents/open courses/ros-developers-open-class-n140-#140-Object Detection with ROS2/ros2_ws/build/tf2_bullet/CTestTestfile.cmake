# CMake generated Testfile for 
# Source directory: /home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet
# Build directory: /home/user/ros2_ws/build/tf2_bullet
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cppcheck "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/cppcheck.xunit.xml" "--package-name" "tf2_bullet" "--output-file" "/home/user/ros2_ws/build/tf2_bullet/ament_cppcheck/cppcheck.txt" "--command" "/opt/ros/foxy/bin/ament_cppcheck" "--xunit-file" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/cppcheck.xunit.xml" "--language" "c++")
set_tests_properties(cppcheck PROPERTIES  LABELS "cppcheck;linter" TIMEOUT "300" WORKING_DIRECTORY "/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_cppcheck/cmake/ament_cppcheck.cmake;61;ament_add_test;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;37;ament_cppcheck;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;0;")
add_test(test_bullet "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/test_bullet.gtest.xml" "--package-name" "tf2_bullet" "--output-file" "/home/user/ros2_ws/build/tf2_bullet/ament_cmake_gtest/test_bullet.txt" "--command" "/home/user/ros2_ws/build/tf2_bullet/test_bullet" "--gtest_output=xml:/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/test_bullet.gtest.xml")
set_tests_properties(test_bullet PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/user/ros2_ws/build/tf2_bullet/test_bullet" TIMEOUT "60" WORKING_DIRECTORY "/home/user/ros2_ws/build/tf2_bullet" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;40;ament_add_gtest;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;0;")
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/copyright.xunit.xml" "--package-name" "tf2_bullet" "--output-file" "/home/user/ros2_ws/build/tf2_bullet/ament_copyright/copyright.txt" "--command" "/opt/ros/foxy/bin/ament_copyright" "--xunit-file" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_copyright/cmake/ament_copyright.cmake;41;ament_add_test;/opt/ros/foxy/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/ros/foxy/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;50;ament_package;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;0;")
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/cpplint.xunit.xml" "--package-name" "tf2_bullet" "--output-file" "/home/user/ros2_ws/build/tf2_bullet/ament_cpplint/cpplint.txt" "--command" "/opt/ros/foxy/bin/ament_cpplint" "--xunit-file" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/foxy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;35;ament_cpplint;/opt/ros/foxy/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;50;ament_package;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/lint_cmake.xunit.xml" "--package-name" "tf2_bullet" "--output-file" "/home/user/ros2_ws/build/tf2_bullet/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/foxy/bin/ament_lint_cmake" "--xunit-file" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;41;ament_add_test;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/foxy/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;50;ament_package;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;0;")
add_test(uncrustify "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/uncrustify.xunit.xml" "--package-name" "tf2_bullet" "--output-file" "/home/user/ros2_ws/build/tf2_bullet/ament_uncrustify/uncrustify.txt" "--command" "/opt/ros/foxy/bin/ament_uncrustify" "--xunit-file" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/uncrustify.xunit.xml")
set_tests_properties(uncrustify PROPERTIES  LABELS "uncrustify;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_uncrustify/cmake/ament_uncrustify.cmake;65;ament_add_test;/opt/ros/foxy/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;34;ament_uncrustify;/opt/ros/foxy/share/ament_cmake_uncrustify/cmake/ament_cmake_uncrustify_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;50;ament_package;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/xmllint.xunit.xml" "--package-name" "tf2_bullet" "--output-file" "/home/user/ros2_ws/build/tf2_bullet/ament_xmllint/xmllint.txt" "--command" "/opt/ros/foxy/bin/ament_xmllint" "--xunit-file" "/home/user/ros2_ws/build/tf2_bullet/test_results/tf2_bullet/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/foxy/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/foxy/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/foxy/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;50;ament_package;/home/user/ros2_ws/src/perception_ros2/geometry2/tf2_bullet/CMakeLists.txt;0;")
subdirs("gtest")
