cmake_minimum_required(VERSION 3.15)
project(chapter04)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter04 main.cpp calsses/median.cpp calsses/median.h calsses/student_info.cpp calsses/student_info.h calsses/grades.cpp calsses/grades.h)