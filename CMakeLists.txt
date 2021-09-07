cmake_minimum_required(VERSION 3.20)
project(cpp06)

set(CMAKE_CXX_STANDARD 98)

include_directories(cpp06/ex00)

add_executable(cpp06
        cpp06/ex00/main.cpp)
