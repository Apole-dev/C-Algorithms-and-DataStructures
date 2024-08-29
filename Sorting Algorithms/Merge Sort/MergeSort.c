//
// Created by Eren on 8/29/2024.
//

#include "MergeSort.h"


/*
### Example Array:
Suppose we have an array: `{8, 3, 5, 9, 2, 7, 1, 6}`

### Step 1: **Splitting the Array**
Merge Sort works by recursively splitting the array into smaller subarrays until each subarray contains only one element.

1. **First Split**:
   - `start = 0`, `end = 7` (whole array).
   - `mid = (0 + 7) / 2 = 3`.
   - The array is split into two parts: `{8, 3, 5, 9}` and `{2, 7, 1, 6}`.

2. **Splitting Left Part `{8, 3, 5, 9}`**:
   - `start = 0`, `end = 3`.
   - `mid = (0 + 3) / 2 = 1`.
   - Split into `{8, 3}` and `{5, 9}`.

3. **Splitting `{8, 3}`**:
   - `start = 0`, `end = 1`.
   - `mid = (0 + 1) / 2 = 0`.
   - Split into `{8}` and `{3}`.

4. **Splitting `{5, 9}`**:
   - `start = 2`, `end = 3`.
   - `mid = (2 + 3) / 2 = 2`.
   - Split into `{5}` and `{9}`.

Now, the left part of the array has been fully split: `{8, 3, 5, 9}` into `{8}`, `{3}`, `{5}`, `{9}`.

5. **Splitting Right Part `{2, 7, 1, 6}`** follows a similar process:
   - Split into `{2, 7}` and `{1, 6}`.
   - `{2, 7}` split into `{2}` and `{7}`.
   - `{1, 6}` split into `{1}` and `{6}`.

At this point, the entire array is split into individual elements: `{8}`, `{3}`, `{5}`, `{9}`, `{2}`, `{7}`, `{1}`, `{6}`.
------------------------------------------------------------------------------------------------------------------------------------
### Step 2: **Merging the Array**
Now, we start merging these individual elements back together in a sorted manner.

1. **Merging `{8}` and `{3}`**:
   - Compare `8` and `3`.
   - Since `3 < 8`, the merged array becomes `{3, 8}`.

2. **Merging `{5}` and `{9}`**:
   - Compare `5` and `9`.
   - Since `5 < 9`, the merged array becomes `{5, 9}`.

3. **Merging `{3, 8}` and `{5, 9}`**:
   - Compare `3` (from `{3, 8}`) and `5` (from `{5, 9}`).
   - Since `3 < 5`, add `3` to the merged array.
   - Next, compare `8` and `5`.
   - Since `5 < 8`, add `5`.
   - Compare `8` and `9`.
   - Since `8 < 9`, add `8`.
   - Finally, add the remaining `9`.
   - The merged array is `{3, 5, 8, 9}`.

4. **Merging the Right Part** (`{2}`, `{7}`, `{1}`, `{6}`):
   - `{2}` and `{7}` merge to form `{2, 7}`.
   - `{1}` and `{6}` merge to form `{1, 6}`.
   - Merge `{2, 7}` and `{1, 6}`:
     - Compare `2` and `1`, add `1`.
     - Compare `2` and `6`, add `2`.
     - Compare `7` and `6`, add `6`.
     - Add the remaining `7`.
     - The merged array is `{1, 2, 6, 7}`.

5. **Final Merge** of the two halves:
   - Merge `{3, 5, 8, 9}` and `{1, 2, 6, 7}`:
     - Compare `3` and `1`, add `1`.
     - Compare `3` and `2`, add `2`.
     - Compare `3` and `6`, add `3`.
     - Compare `5` and `6`, add `5`.
     - Compare `8` and `6`, add `6`.
     - Compare `8` and `7`, add `7`.
     - Add the remaining `8`, and `9`.
   - The fully sorted array is `{1, 2, 3, 5, 6, 7, 8, 9}`.

*/

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
    //Step by step assignment
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


    //NOTE: We must check if there are elements left in LeftSideArray or RightSideArray
    //because array length do not have to be same

    //If there are elements left in LeftSideArray
    while (i < leftPart) {
        Array[m] = LeftSideArray[i];
        i++;
        m++;
    }

    //If there are elements left in RightSideArray
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
