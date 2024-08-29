//
// Created by Eren on 8/29/2024.
//

#include "BubbleSort.h"

#include <stddef.h>


/*
    Why do we use double loop in Bubble Sort?
    To reduce the time complexity of the algorithm.
    Double loop reduce comparesment;
    For example: If len = 5  last element will be 5th but with other loop it will be 4th.

    Complexity: O(n^2)
*/
int * BubbleSort(int *array, int len) {
    if(len == 0 || len == 1) return NULL;

    for (int i = 0; i < len-1; ++i) {
        for (int j = 0; j < len-i-1; ++j) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return array;

}

char * BubbleSortChar(char *array, int len) {
    if(len == 0 || len == 1 ) return NULL;

    for (int i = 0; i < len-1; ++i) {
        for (int j = 0; j < len-i-1; ++j) {
            if(array[j] > array[j+1]) {
                char temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return array;
}
