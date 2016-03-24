cmake_minimum_required(VERSION 3.3)
project(OP1Predavanja)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Predavanje.h Predavanje3/Predavanje3.cpp Predavanje4/Predavanje4.cpp Predavanje5/Predavanje5.cpp Predavanje3/Point.h Predavanje3/Point.cpp Predavanje3/Predavanje3.h Predavanje4/Predavanje4.h Predavanje5/Complex.h Predavanje5/Complex.cpp Predavanje5/Predavanje5.h)
add_executable(OP1Predavanja ${SOURCE_FILES})