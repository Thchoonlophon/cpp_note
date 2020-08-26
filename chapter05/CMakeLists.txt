cmake_minimum_required(VERSION 3.15)
project(chapter05)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter05 source/main.cpp source/students.cpp head/students.h source/get_grades.cpp head/get_grades.h source/median.cpp head/median.h source/extract_fails.cpp head/extract_fails.h source/pop_vector.cpp head/pop_vector.h head/string_sp.h)