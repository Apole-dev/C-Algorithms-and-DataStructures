cmake_minimum_required(VERSION 3.0)
project(Algorithm C)

set(CMAKE_C_STANDARD 17)

add_executable(Algorithm main.c
        Arrays/ArrayOperations.c
        Arrays/ArrayOperations.h
        LinkedList/LinkedList.c
        LinkedList/LinkedList.h)
