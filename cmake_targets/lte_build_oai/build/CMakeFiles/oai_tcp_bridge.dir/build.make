# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /opt/oai/openairinterface5g/cmake_targets/lte_build_oai

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build

# Include any dependencies generated for this target.
include CMakeFiles/oai_tcp_bridge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/oai_tcp_bridge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/oai_tcp_bridge.dir/flags.make

CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o: CMakeFiles/oai_tcp_bridge.dir/flags.make
CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o: /opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o   -c /opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c

CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c > CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.i

CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c -o CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.s

CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.requires:

.PHONY : CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.requires

CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.provides: CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.requires
	$(MAKE) -f CMakeFiles/oai_tcp_bridge.dir/build.make CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.provides.build
.PHONY : CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.provides

CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.provides.build: CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o


# Object files for target oai_tcp_bridge
oai_tcp_bridge_OBJECTS = \
"CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o"

# External object files for target oai_tcp_bridge
oai_tcp_bridge_EXTERNAL_OBJECTS =

liboai_tcp_bridge.so: CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o
liboai_tcp_bridge.so: CMakeFiles/oai_tcp_bridge.dir/build.make
liboai_tcp_bridge.so: CMakeFiles/oai_tcp_bridge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module liboai_tcp_bridge.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/oai_tcp_bridge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/oai_tcp_bridge.dir/build: liboai_tcp_bridge.so

.PHONY : CMakeFiles/oai_tcp_bridge.dir/build

CMakeFiles/oai_tcp_bridge.dir/requires: CMakeFiles/oai_tcp_bridge.dir/opt/oai/openairinterface5g/targets/ARCH/tcp_bridge/tcp_bridge.c.o.requires

.PHONY : CMakeFiles/oai_tcp_bridge.dir/requires

CMakeFiles/oai_tcp_bridge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/oai_tcp_bridge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/oai_tcp_bridge.dir/clean

CMakeFiles/oai_tcp_bridge.dir/depend:
	cd /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/oai/openairinterface5g/cmake_targets/lte_build_oai /opt/oai/openairinterface5g/cmake_targets/lte_build_oai /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/oai_tcp_bridge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/oai_tcp_bridge.dir/depend

