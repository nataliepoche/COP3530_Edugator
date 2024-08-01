cmake_minimum_required(VERSION 3.28)
project(extract_max)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(extract_max
        .idea/.gitignore
        .idea/extract_max.iml
        .idea/modules.xml
        .idea/workspace.xml
        src/extract_max.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
