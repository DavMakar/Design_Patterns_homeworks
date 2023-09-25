cmake_minimum_required(VERSION 3.12)

project(HouseBuilder)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES House.cpp HouseWithPoolBuilder.cpp NormalHouseBuilder.cpp Director.cpp)

add_executable(HouseBuilder main.cpp ${SOURCES})