cmake_minimum_required(VERSION 3.0)
project(Algorithm C)

set(CMAKE_C_STANDARD 17)

add_executable(Algorithm main.c
        LinkedList/LinkedList.c
        LinkedList/LinkedList.h
        Stack/Stack.c
        Stack/Stack.h
        Queue/Queue.c
        Queue/Queue.h
        HashMap/HashMap.c
        HashMap/HashMap.h
        "Sorting Algorithms/Bubble Sort/BubbleSort.c"
        "Sorting Algorithms/Bubble Sort/BubbleSort.h"
        "Sorting Algorithms/Merge Sort/MergeSort.c"
        "Sorting Algorithms/Merge Sort/MergeSort.h"
        "Sorting Algorithms/Insertion Sort/InsertionSort.c"
        "Sorting Algorithms/Insertion Sort/InsertionSort.h"
        "Sorting Algorithms/Quick Sort/QuickSort.c"
        "Sorting Algorithms/Quick Sort/QuickSort.h"
)
