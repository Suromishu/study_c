cmake_minimum_required(VERSION 3.31)
project(study_c C)

set(CMAKE_C_STANDARD 11)

add_executable(study_c src/first_test/main.c
        src/first_test/test.c
        include/test.h)
add_executable(de1_de04 src/demo1/demo04.c
        src/demo1/de1_de03.c
        include/de1_de03.h)
