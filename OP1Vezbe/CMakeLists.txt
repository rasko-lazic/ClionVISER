cmake_minimum_required(VERSION 3.3)
project(OP1Vezbe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Vezbe.h Vezba1/Vezba1.cpp Vezba2/Vezba2.cpp Domaci1/Domaci1.cpp Domaci1/Date.h Domaci1/Date.cpp Domaci1/Domaci1.h Vezba3/EventDate.h Vezba3/EventDate.cpp Vezba1/Triangle.h Vezba1/Triangle.cpp Vezba1/Vezba1.h)
add_executable(OP1Vezbe ${SOURCE_FILES})