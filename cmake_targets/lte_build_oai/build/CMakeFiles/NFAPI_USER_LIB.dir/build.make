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
include CMakeFiles/NFAPI_USER_LIB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NFAPI_USER_LIB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NFAPI_USER_LIB.dir/flags.make

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o: CMakeFiles/NFAPI_USER_LIB.dir/flags.make
CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o: /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o   -c /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c > CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.i

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c -o CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.s

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.requires:

.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.requires

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.provides: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.requires
	$(MAKE) -f CMakeFiles/NFAPI_USER_LIB.dir/build.make CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.provides.build
.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.provides

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.provides.build: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o


CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o: CMakeFiles/NFAPI_USER_LIB.dir/flags.make
CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o: /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o   -c /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c > CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.i

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c -o CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.s

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.requires:

.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.requires

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.provides: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.requires
	$(MAKE) -f CMakeFiles/NFAPI_USER_LIB.dir/build.make CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.provides.build
.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.provides

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.provides.build: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o


CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o: CMakeFiles/NFAPI_USER_LIB.dir/flags.make
CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o: /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o   -c /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.i"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c > CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.i

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.s"
	/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c -o CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.s

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.requires:

.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.requires

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.provides: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.requires
	$(MAKE) -f CMakeFiles/NFAPI_USER_LIB.dir/build.make CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.provides.build
.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.provides

CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.provides.build: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o


# Object files for target NFAPI_USER_LIB
NFAPI_USER_LIB_OBJECTS = \
"CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o" \
"CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o" \
"CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o"

# External object files for target NFAPI_USER_LIB
NFAPI_USER_LIB_EXTERNAL_OBJECTS =

libNFAPI_USER_LIB.a: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o
libNFAPI_USER_LIB.a: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o
libNFAPI_USER_LIB.a: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o
libNFAPI_USER_LIB.a: CMakeFiles/NFAPI_USER_LIB.dir/build.make
libNFAPI_USER_LIB.a: CMakeFiles/NFAPI_USER_LIB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C static library libNFAPI_USER_LIB.a"
	$(CMAKE_COMMAND) -P CMakeFiles/NFAPI_USER_LIB.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NFAPI_USER_LIB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NFAPI_USER_LIB.dir/build: libNFAPI_USER_LIB.a

.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/build

CMakeFiles/NFAPI_USER_LIB.dir/requires: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi.c.o.requires
CMakeFiles/NFAPI_USER_LIB.dir/requires: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_pnf.c.o.requires
CMakeFiles/NFAPI_USER_LIB.dir/requires: CMakeFiles/NFAPI_USER_LIB.dir/opt/oai/openairinterface5g/nfapi/oai_integration/nfapi_vnf.c.o.requires

.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/requires

CMakeFiles/NFAPI_USER_LIB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NFAPI_USER_LIB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/clean

CMakeFiles/NFAPI_USER_LIB.dir/depend:
	cd /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /opt/oai/openairinterface5g/cmake_targets/lte_build_oai /opt/oai/openairinterface5g/cmake_targets/lte_build_oai /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build /opt/oai/openairinterface5g/cmake_targets/lte_build_oai/build/CMakeFiles/NFAPI_USER_LIB.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NFAPI_USER_LIB.dir/depend

