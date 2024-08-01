cmake_minimum_required(VERSION 3.28)
project(sum_of_level)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(sum_of_level
        .idea/.gitignore
        .idea/modules.xml
        .idea/sum_of_level.iml
        .idea/vcs.xml
        .idea/workspace.xml
        src/sum_of_level.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
