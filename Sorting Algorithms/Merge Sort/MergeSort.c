//
// Created by Eren on 8/29/2024.
//

#include "MergeSort.h"


void Merge(int* Array , int start, int mid, int end) {

    int leftPart = mid-start;
    int rightPart = end-mid+1;

    int LeftSideArray[leftPart]; //5
    int RightSideArray[rightPart]; //6

    for (int i = 0; i < leftPart; ++i) {
        LeftSideArray[i] = Array[start+i];
    }
    for (int j = 0; j < rightPart; ++j) {
        RightSideArray[j] = Array[mid+1+j];
    }


    int i = 0;
    int j = 0;
    int m = start;
    while (i < leftPart && j < rightPart) {
        if(LeftSideArray[i] <= RightSideArray[i]) {
            Array[m] = LeftSideArray[i];
            i++;
        } else {
            Array[m] = RightSideArray[j];
            j++;
        }
        m++;
    }

    //If there are elements in LeftSideArray
    while (i < leftPart) {
        Array[m] = LeftSideArray[i];
        i++;
        m++;
    }

    //If there are elements in RightSideArray
    while (j < rightPart) {
        Array[m] = RightSideArray[j];
        j++;
        m++;
    }
}

void MergeSort(int *array, int start, int end) {
    if(start < end) {
        int mid = (start+end)/2;
        MergeSort(array, start, mid);
        MergeSort(array, mid+1, end);
        Merge(array, start, mid, end);
    }
}
