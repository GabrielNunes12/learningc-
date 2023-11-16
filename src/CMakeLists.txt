cmake_minimum_required(VERSION 3.26)
project(src)

set(CMAKE_CXX_STANDARD 17)

add_executable(src old_main/main.cpp
        OOP/typeconversions.cpp
        OOP/typeconversions.h
        maths/maths.cpp)
