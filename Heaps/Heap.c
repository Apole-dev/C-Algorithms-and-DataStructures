//
// Created by Eren on 9/2/2024.
//

#include "Heap.h"

int heapLength = 0;
void Heapify(int array[], int len, int index) {
    if(len == 0 || len == 1 ) return;

    int largest = index;
    int left = 2*index + 1;
    int right = 2*index + 2;

    if(left <len && array[largest] <array[left]) largest = left;
    if(right < len && array[largest] < array[right]) largest = right;

    if(largest != index) {
        int temp = array[index];
        array[index] = array[largest];
        array[largest] = temp;
        Heapify(array, len, largest);
    }
};

void InsertHeapElement(int array[], int element) {
    if(heapLength == 0 ) {
        array[0] = element;
        heapLength++;
    }else{
        array[heapLength] = element;
        heapLength++;
        for (int i = (heapLength/2) -1 ; i >= 0; --i) {
            Heapify(array, heapLength, i);
        }
    }

}

bool DeleteHeapElement(int array[], int element) {
    int i;
    for (i = 0; i < heapLength; ++i) {
        if(array[i] == element) break; // element founded
    }
    if(i == heapLength) return false;

    array[i] = array[heapLength-1];
    heapLength--;
    Heapify(array, heapLength, i);
    return true;
}
