cmake_minimum_required(VERSION 3.28)
project(degree_of_string)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(degree_of_string
        .idea/.gitignore
        .idea/degree_of_string.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        src/cop3530_5_2.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
