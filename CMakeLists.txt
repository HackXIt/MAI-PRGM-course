cmake_minimum_required(VERSION 3.29)
project(MAI_PRGM_course)

set(CMAKE_CXX_STANDARD 14)

include_directories(Session02/TileExercise/include)

add_executable(MAI_PRGM_course
    Session02/TileExercise/include/Tile.h
    Session02/TileExercise/src/Tile.cpp
    Session02/TileExercise/main.cpp
        Session02/TileExercise/src/RedTile.cpp
        Session02/TileExercise/include/RedTile.h
        Session02/TileExercise/src/BlueTile.cpp
        Session02/TileExercise/include/BlueTile.h
        Session02/TileExercise/src/GreenTile.cpp
        Session02/TileExercise/include/GreenTile.h
        Session02/TileExercise/src/Floor.cpp
        Session02/TileExercise/include/Floor.h)
