cmake_minimum_required(VERSION 3.28)
project(four_digits)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test-unit)

add_executable(four_digits
        .idea/.gitignore
        .idea/workspace.xml
        src/four_digits.h
        test-unit/catch.hpp
        test-unit/test.cpp
        readme.md)
