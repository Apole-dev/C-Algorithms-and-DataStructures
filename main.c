#include <stdio.h>

#include "Heaps/Heap.h"
#include "Sorting Algorithms/Bubble Sort/BubbleSort.h"
#include "Sorting Algorithms/Insertion Sort/InsertionSort.h"
#include "Sorting Algorithms/Quick Sort/QuickSort.h"
#include "Sorting Algorithms/Selection Sort/SelectionSort.h"

int main(void) {
    int arr[] = {3  ,1 ,4 ,5 ,2,432,9,6,13};
    int n = sizeof(arr) / sizeof(arr[0]);

    int test_Array[] = {};
    InsertHeapElement(test_Array,8);
    InsertHeapElement(test_Array,2);
    InsertHeapElement(test_Array,1);
    InsertHeapElement(test_Array,5);
    InsertHeapElement(test_Array,14);
    InsertHeapElement(test_Array,3);


    for (int i = 0; i < 6; ++i) {
        printf("%d ", test_Array[i]);
    }
    return 0;
}
