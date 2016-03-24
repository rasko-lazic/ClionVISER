cmake_minimum_required(VERSION 3.3)
project(OP1Predavanja)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Predavanje.h Predavanje3.cpp Predavanje4.cpp Predavanje5.cpp)
add_executable(OP1Predavanja ${SOURCE_FILES})