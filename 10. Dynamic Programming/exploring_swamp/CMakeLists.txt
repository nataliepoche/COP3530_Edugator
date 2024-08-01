cmake_minimum_required(VERSION 3.28)
project(exploring_swamp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(exploring_swamp
        .idea/.gitignore
        .idea/workspace.xml
        src/cop3530_9_1.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
