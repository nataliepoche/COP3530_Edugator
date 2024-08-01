cmake_minimum_required(VERSION 3.28)
project(maze_escape)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(maze_escape
        .idea/.gitignore
        .idea/workspace.xml
        src/maze_escape.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
