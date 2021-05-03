cmake_minimum_required(VERSION 3.19)
project(MACROSes_and_PREPROCESSOR)

set(CMAKE_CXX_STANDARD 20)

add_executable(main main.cpp headers/days_of_the_week.h task_2.cpp task_3.cpp headers/seasons_list.h)
add_executable(task_1 task_1.cpp)
add_executable(task_2 task_2.cpp headers/trains_and_wagons.h)
add_executable(task_3 task_3.cpp)
