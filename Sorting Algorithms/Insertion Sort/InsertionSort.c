//
// Created by Eren on 8/30/2024.
//

#include "InsertionSort.h"


/*
Example Walkthrough:
Initial Array: {3, 4, 7, 8, 5}
currentValue: The element we want to place in the correct position. In this case, currentValue = 5.
Step by Step Logic:
----------------------------------
Compare 5 with 8:

array[previousStep] = 8 (where previousStep = 3)

Since 8 > 5, we shift 8 one position to the right.
array[previousStep + 1] = array[previousStep] means array[4] = 8

Array becomes: {3, 4, 7, 8, 8}
Note: We haven't lost 8; we've previousStepust duplicated it for now.
Decrement previousStep: Now, previousStep = 2.
-------------------------------------
Compare 5 with 7:

array[previousStep] = 7 (where previousStep = 2)
Since 7 > 5, we shift 7 one position to the right.

array[previousStep + 1] = array[previousStep] means array[3] = 7
Array becomes: {3, 4, 7, 7, 8}

Note: 7 is now moved to the correct spot, and 8 is still safe in its new position.
Decrement previousStep: Now, previousStep = 1.
--------------------------------
Compare 5 with 4:

array[previousStep] = 4 (where previousStep = 1)
Since 4 < 5, we stop shifting.

Now we place the key (which is 5) into the position previousStep + 1.
array[previousStep + 1] = key means array[2] = 5

Final Array: {3, 4, 5, 7, 8}

*/

void InsertionSort(int array[], int len) {
    if(len == 0 || len == 1) return;

    for (int currentStep = 1; currentStep < len; ++currentStep) {
        int currentValue  = array[currentStep];
        int previousStep = currentStep - 1;

        while(currentValue < array[previousStep] && previousStep >= 0) {
            array[previousStep+1] = array[previousStep];
            previousStep--;
        }
        array[previousStep+1] = currentValue;
    }
}
