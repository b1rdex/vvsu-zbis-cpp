cmake_minimum_required(VERSION 3.10)
project(vvsu_zbis_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(vvsu_zbis_cpp main.cpp task1/task1.cpp task1/task1.h task2/task21.cpp task2/task21.h task2/task22.cpp task2/task22.h task3/task3.cpp task3/task3.h task4/task4.cpp task4/task4.h task5/task5.cpp task5/task5.h task61/task61.cpp task61/task61.h task61/Human.cpp task61/Human.h task62/task62.cpp task62/task62.h task62/Vector3.cpp task62/Vector3.h)
