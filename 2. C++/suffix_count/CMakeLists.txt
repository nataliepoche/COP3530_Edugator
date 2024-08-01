cmake_minimum_required(VERSION 3.28)
project(suffix_count)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(suffix_count
        .idea/.gitignore
        .idea/modules.xml
        .idea/suffix_count.iml
        .idea/vcs.xml
        .idea/workspace.xml
        src/suffix_count.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
