cmake_minimum_required(VERSION 3.6)
project(exerc1)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c exerc2.cpp)
add_executable(exerc1 ${SOURCE_FILES})