cmake_minimum_required(VERSION 3.5)

project(_112SUmPath)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES SumPath1.cpp SumPath2.cpp)

add_executable(_112SUmPath ${SOURCE_FILES} SumPath1.cpp SumPath2.cpp)

