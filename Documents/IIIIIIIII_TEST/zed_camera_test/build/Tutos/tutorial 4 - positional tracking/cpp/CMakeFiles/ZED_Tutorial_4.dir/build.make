# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/zed_tutorials

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos

# Include any dependencies generated for this target.
include tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/compiler_depend.make

# Include the progress variables for this target.
include tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/progress.make

# Include the compile flags for this target's objects.
include tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/flags.make

tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o: tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/flags.make
tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o: /home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/zed_tutorials/tutorial\ 4\ -\ positional\ tracking/cpp/main.cpp
tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o: tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tutorial 4 - positional tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o"
	cd "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/tutorial 4 - positional tracking/cpp" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT "tutorial\\ 4\\ -\\ positional\\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o" -MF CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o.d -o CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o -c "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/zed_tutorials/tutorial 4 - positional tracking/cpp/main.cpp"

tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ZED_Tutorial_4.dir/main.cpp.i"
	cd "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/tutorial 4 - positional tracking/cpp" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/zed_tutorials/tutorial 4 - positional tracking/cpp/main.cpp" > CMakeFiles/ZED_Tutorial_4.dir/main.cpp.i

tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ZED_Tutorial_4.dir/main.cpp.s"
	cd "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/tutorial 4 - positional tracking/cpp" && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/zed_tutorials/tutorial 4 - positional tracking/cpp/main.cpp" -o CMakeFiles/ZED_Tutorial_4.dir/main.cpp.s

# Object files for target ZED_Tutorial_4
ZED_Tutorial_4_OBJECTS = \
"CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o"

# External object files for target ZED_Tutorial_4
ZED_Tutorial_4_EXTERNAL_OBJECTS =

tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/main.cpp.o
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/build.make
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: /usr/local/zed/lib/libsl_zed.so
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: /usr/lib/x86_64-linux-gnu/libopenblas.so
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: /usr/lib/x86_64-linux-gnu/libnvidia-encode.so
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: /usr/lib/x86_64-linux-gnu/libcuda.so
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: /usr/local/cuda-12.3/lib64/libcudart.so
tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4: tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ZED_Tutorial_4"
	cd "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/tutorial 4 - positional tracking/cpp" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ZED_Tutorial_4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/build: tutorial\ 4\ -\ positional\ tracking/cpp/ZED_Tutorial_4
.PHONY : tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/build

tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/clean:
	cd "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/tutorial 4 - positional tracking/cpp" && $(CMAKE_COMMAND) -P CMakeFiles/ZED_Tutorial_4.dir/cmake_clean.cmake
.PHONY : tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/clean

tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/depend:
	cd /home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/zed_tutorials "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/zed_tutorials/tutorial 4 - positional tracking/cpp" /home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/tutorial 4 - positional tracking/cpp" "/home/steven/Documents/IIIIIIIII_TEST/zed_camera_test/build/Tutos/tutorial 4 - positional tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : tutorial\ 4\ -\ positional\ tracking/cpp/CMakeFiles/ZED_Tutorial_4.dir/depend

