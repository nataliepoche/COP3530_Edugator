cmake_minimum_required(VERSION 3.28)
project(valid_path)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(valid_path
        .idea/.gitignore
        .idea/workspace.xml
        src/valid_path.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
