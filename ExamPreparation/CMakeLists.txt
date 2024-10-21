cmake_minimum_required(VERSION 3.0)
project(ExamPreparation)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Gather all source files
file(GLOB_RECURSE SOURCES
        "${PROJECT_SOURCE_DIR}/**/*.cpp"
)

# Exclude main.cpp from SOURCES
list(REMOVE_ITEM SOURCES "${PROJECT_SOURCE_DIR}/main.cpp")

add_executable(ExamPreparation main.cpp ${SOURCES})
