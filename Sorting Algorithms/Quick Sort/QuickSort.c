#include "QuickSort.h"

void QuickSort(int array[], int start, int end) {
    if (start >= end) return;

    int pivot = array[end];
    int i = start - 1;

    for (int j = start; j < end; ++j) {
        if (array[j] <= pivot) {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    int temp = array[i + 1];
    array[i + 1] = array[end];
    array[end] = temp;

    int pivotIndex = i + 1;
    QuickSort(array, start, pivotIndex - 1);
    QuickSort(array, pivotIndex + 1, end);
}
