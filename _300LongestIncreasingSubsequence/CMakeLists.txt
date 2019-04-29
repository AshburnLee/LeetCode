cmake_minimun_required(VERSION 3.5)

project(_300LongestIncreasingSubsequence)

set(CMAKE_CXX_FLAGS "${MAKE_CXX_FLAGS} -std=c++11" )

set(SOURCE_FILE LongestIncreasingSubsequence.cpp)

add_executable(_300LongestIncreasingSubsequence ${SOURCE_FILE} LongestIncreasingSubsequence.cpp)
