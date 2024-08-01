cmake_minimum_required(VERSION 3.28)
project(interquartile_range)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(interquartile_range
        .idea/.gitignore
        .idea/workspace.xml
        src/interquartile_range.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
