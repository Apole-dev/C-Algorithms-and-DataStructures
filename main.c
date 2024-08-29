#include <stdio.h>

#include "Sorting Algorithms/Bubble Sort/BubbleSort.h"
#include "Sorting Algorithms/Insertion Sort/InsertionSort.h"
#include "Sorting Algorithms/Quick Sort/QuickSort.h"

int main(void) {
    int arr[] = {3  ,1 ,4 ,5 ,2,432,9,6,13};

    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr,0,n-1);

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
