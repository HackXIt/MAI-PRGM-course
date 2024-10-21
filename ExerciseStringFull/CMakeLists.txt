cmake_minimum_required(VERSION 3.10)

# Set the project name
project(StringClassProject)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add an executable target for the project
add_executable(StringClassProject main.cpp String.cpp)

# Enable warnings
if (CMAKE_COMPILER_IS_GNUCXX)
    target_compile_options(StringClassProject PRIVATE -Wall -Wextra -pedantic)
endif()
