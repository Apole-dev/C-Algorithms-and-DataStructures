//
// Created by Eren on 9/1/2024.
//

#include "SelectionSort.h"

void SelectionSort(int array[], int len, int start) {
    if (start >= len - 1) return;
    int minIndex = start;


    //Subtle point here instead of assign new value we just found the right point
    for (int i = start + 1; i < len; ++i) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
    }

    if (minIndex != start) {
        int temp = array[start];
        array[start] = array[minIndex];
        array[minIndex] = temp;
    }

    SelectionSort(array, len, start + 1);
}