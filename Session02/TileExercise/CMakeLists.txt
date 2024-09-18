cmake_minimum_required(VERSION 3.29)
project(tile_exercise)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_CURRENT_LIST_DIR}/include)

add_executable(${PROJECT_NAME}
        ${CMAKE_CURRENT_LIST_DIR}/main.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/Tile.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/RedTile.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/BlueTile.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/GreenTile.cpp
        ${CMAKE_CURRENT_LIST_DIR}/src/Floor.cpp
        ../../Session03/ClassCode/main.cpp
)
