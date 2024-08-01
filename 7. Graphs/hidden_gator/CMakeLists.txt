cmake_minimum_required(VERSION 3.28)
project(hidden_gator)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(hidden_gator
        .idea/.gitignore
        .idea/workspace.xml
        src/hidden_gator.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
