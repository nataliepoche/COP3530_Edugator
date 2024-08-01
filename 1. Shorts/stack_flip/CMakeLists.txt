cmake_minimum_required(VERSION 3.28)
project(stack_flip)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(stack_flip
        .idea/.gitignore
        .idea/workspace.xml
        src/cop3530_10_1.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
