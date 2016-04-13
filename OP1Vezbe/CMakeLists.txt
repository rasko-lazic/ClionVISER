cmake_minimum_required(VERSION 3.3)
project(OP1Vezbe)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Vezbe.h Vezba1/Vezba1.cpp Vezba2/Vezba2.cpp Domaci1/Domaci1.cpp Domaci1/Date.h Domaci1/Date.cpp Domaci1/Domaci1.h Vezba3/EventDate.h Vezba3/EventDate.cpp Vezba1/Triangle.h Vezba1/Triangle.cpp Vezba1/Vezba1.h Vezba2/Color.h Vezba2/Color.cpp Vezba2/Vezba2.h Vezba3/Event.h Vezba3/Event.cpp Vezba3/Vezba3.h Vezba3/Vezba3.cpp Domaci2/Point.h Domaci2/PointTriangle.h Domaci2/Point.cpp Domaci2/PointTriangle.cpp Domaci2/Domaci2.h Domaci2/Domaci2.cpp Domaci3/Ticket.h Domaci3/Ticket.cpp Domaci3/Airplane.h Vezba4/Car.h Vezba4/Car.cpp Vezba4/Parking.h Vezba4/Parking.cpp Vezba4/Vezba4.h Vezba4/Vezba4.cpp Domaci3/Airplane.cpp Domaci3/Domaci3.h Domaci3/Domaci3.cpp Domaci4/Cuboid.h Domaci4/Cuboid.cpp Domaci4/CuboidArray.h Domaci4/CuboidArray.cpp Domaci4/Domaci4.h Domaci4/Domaci4.cpp)
add_executable(OP1Vezbe ${SOURCE_FILES})