cmake_minimum_required(VERSION 3.3)
project(OP1Vezbe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Vezbe.h Vezba1.cpp Vezba2.cpp Domaci1.cpp)
add_executable(OP1Vezbe ${SOURCE_FILES})