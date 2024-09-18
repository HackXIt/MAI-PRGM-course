cmake_minimum_required(VERSION 3.29)
project(class_code)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

add_executable(${PROJECT_NAME}
        ${CMAKE_CURRENT_LIST_DIR}/main.cpp
)
