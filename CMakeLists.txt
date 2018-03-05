cmake_minimum_required(VERSION 3.10)
project(vvsu_zbis_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(vvsu_zbis_cpp main.cpp task1/task1.cpp task1/task1.h task2/task21.cpp task2/task21.h task2/task22.cpp task2/task22.h)\
