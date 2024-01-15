cmake_minimum_required(VERSION 2.8)
project(test)

set(CMAKE_CXX_STANDARD 20)

add_executable(test main.cpp
        src/MyClass.cpp
        include/MyClass.h
)
