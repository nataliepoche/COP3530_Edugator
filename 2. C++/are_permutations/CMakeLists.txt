cmake_minimum_required(VERSION 3.28)
project(are_permutations)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(are_permutations
        .idea/.gitignore
        .idea/are_permutations.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        src/cop3530_1_2.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
