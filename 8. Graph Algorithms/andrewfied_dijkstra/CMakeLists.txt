cmake_minimum_required(VERSION 3.28)
project(andrewfied_dijkstra)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(andrewfied_dijkstra
        .idea/.gitignore
        .idea/workspace.xml
        src/andrewfied_dijkstra.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
