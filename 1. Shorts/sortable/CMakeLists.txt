cmake_minimum_required(VERSION 3.28)
project(sortable)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(sortable
        .idea/.gitignore
        .idea/workspace.xml
        src/cop3530_10_3.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
