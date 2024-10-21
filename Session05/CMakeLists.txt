cmake_minimum_required(VERSION 3.29)
project(session_04)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

file(GLOB SOURCES ${CMAKE_CURRENT_LIST_DIR}/src/*.cpp)

add_executable(${PROJECT_NAME}
        ${SOURCES}
)
