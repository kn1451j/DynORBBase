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
CMAKE_SOURCE_DIR = /home/parallels/DynORBBase/src/DynORB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/parallels/DynORBBase/src/build/ORB_SLAM2

# Include any dependencies generated for this target.
include CMakeFiles/stereo_euroc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/stereo_euroc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/stereo_euroc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stereo_euroc.dir/flags.make

CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o: CMakeFiles/stereo_euroc.dir/flags.make
CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o: /home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc.cc
CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o: CMakeFiles/stereo_euroc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/parallels/DynORBBase/src/build/ORB_SLAM2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o -MF CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o.d -o CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o -c /home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc.cc

CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc.cc > CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.i

CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc.cc -o CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.s

# Object files for target stereo_euroc
stereo_euroc_OBJECTS = \
"CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o"

# External object files for target stereo_euroc
stereo_euroc_EXTERNAL_OBJECTS =

/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: CMakeFiles/stereo_euroc.dir/Examples/Stereo/stereo_euroc.cc.o
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: CMakeFiles/stereo_euroc.dir/build.make
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /home/parallels/DynORBBase/src/DynORB/lib/libORB_SLAM2.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_dnn.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_highgui.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_ml.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_objdetect.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_shape.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_stitching.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_superres.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_videostab.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_calib3d.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_features2d.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_flann.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_photo.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_video.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_videoio.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_imgcodecs.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_imgproc.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/local/lib/libopencv_core.so.3.4.20
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /home/parallels/Pangolin/build/src/libpangolin.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libOpenGL.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libGLX.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libGLU.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libGLEW.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libEGL.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libSM.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libICE.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libX11.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libXext.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libOpenGL.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libGLX.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libGLU.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libGLEW.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libEGL.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libSM.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libICE.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libX11.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libXext.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libavcodec.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libavformat.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libavutil.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libswscale.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libavdevice.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libpng.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libz.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libjpeg.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /usr/lib/aarch64-linux-gnu/libtiff.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /home/parallels/DynORBBase/src/DynORB/Thirdparty/DBoW2/lib/libDBoW2.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: /home/parallels/DynORBBase/src/DynORB/Thirdparty/g2o/lib/libg2o.so
/home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc: CMakeFiles/stereo_euroc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/parallels/DynORBBase/src/build/ORB_SLAM2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stereo_euroc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stereo_euroc.dir/build: /home/parallels/DynORBBase/src/DynORB/Examples/Stereo/stereo_euroc
.PHONY : CMakeFiles/stereo_euroc.dir/build

CMakeFiles/stereo_euroc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stereo_euroc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stereo_euroc.dir/clean

CMakeFiles/stereo_euroc.dir/depend:
	cd /home/parallels/DynORBBase/src/build/ORB_SLAM2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/parallels/DynORBBase/src/DynORB /home/parallels/DynORBBase/src/DynORB /home/parallels/DynORBBase/src/build/ORB_SLAM2 /home/parallels/DynORBBase/src/build/ORB_SLAM2 /home/parallels/DynORBBase/src/build/ORB_SLAM2/CMakeFiles/stereo_euroc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stereo_euroc.dir/depend

