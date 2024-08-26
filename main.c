#include <stdio.h>
#include <stdlib.h>

#include "LinkedList/LinkedList.h"
#include "Stack/Stack.h"
#include "Queue/Queue.h"
#include "HashMap/HashMap.h"
int main(void) {
    int arr[] = {3 ,3 ,1 ,4 ,5 ,2 ,1 ,3};

    for (int i = 0; i < 8; ++i) {
        InsertElement(arr[i]);
    }

    WriteFrequency();
    return 0;
}
