cmake_minimum_required (VERSION 2.6)
project (CCPWindow)

# The version number.
set (CCPWindow_VERSION_MAJOR 1)
set (CCPWindow_VERSION_MINOR 0)
set (CCPWindow_VERSION_MINI 0)
set (CCPWindow_VERSION_MICRO 0)

# Configure a header file to pass some of the CMake settings
# to the source code.
configure_file (
"${PROJECT_SOURCE_DIR}/Config.h.in"
"${PROJECT_BINARY_DIR}/Config.h"
)

# Add the binary tree to the search path for include files
# so that we will find Config.h
include_directories("${PROJECT_BINARY_DIR}")

# Add the executable
add_executable(CCPWindow main.c)
