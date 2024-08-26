cmake_minimum_required(VERSION 3.0)
project(Algorithm C)

set(CMAKE_C_STANDARD 17)

add_executable(Algorithm main.c
        LinkedList/LinkedList.c
        LinkedList/LinkedList.h
        Stack/Stack.c
        Stack/Stack.h
        Queue/Queue.c
        Queue/Queue.h)
