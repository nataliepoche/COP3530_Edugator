cmake_minimum_required(VERSION 3.28)
project(image_encryptor)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(src)
include_directories(test)

add_executable(image_encryptor
        .idea/.gitignore
        .idea/workspace.xml
        src/quiz3.h
        test/catch.hpp
        test/test.cpp)
