cmake_minimum_required(VERSION 3.5)

project(_77Combinations)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        Combination.cpp
        playGround.cpp
        playGround1.cpp playGround2.cpp)

add_executable(_77Combinations ${SOURCE_FILES}
        Combination.cpp
        playGround1.cpp
        playGround.cpp)