cmake_minimum_required(VERSION 3.14)
project(stack)

set(CMAKE_CXX_STANDARD 11)

include_directories(../Vector/include) # stack derived from vector

add_executable(stack main.cpp)