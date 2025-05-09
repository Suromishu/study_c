cmake_minimum_required(VERSION 3.31)
project(study_c C)

set(CMAKE_C_STANDARD 11)

add_executable(study_c src/first_test/main.c
        src/first_test/test.c
        include/test.h)
