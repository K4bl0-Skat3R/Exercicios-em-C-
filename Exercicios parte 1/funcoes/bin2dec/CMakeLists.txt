cmake_minimum_required(VERSION 3.7)
project(bin2dec)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)
add_executable(bin2dec ${SOURCE_FILES})