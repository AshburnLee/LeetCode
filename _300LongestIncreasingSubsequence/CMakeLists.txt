cmake_minimum_required(VERSION 3.5)

project(_300LongestIncreasingSubsequence)

set(CMAKE_CXX_FLAGS "${MAKE_CXX_FLAGS} -std=c++11" )

set(SOURCE_FILE
        LIS1.cpp
        LIS2.cpp)

add_executable(_300LongestIncreasingSubsequence ${SOURCE_FILE}
        LIS1.cpp
        LIS2.cpp)
