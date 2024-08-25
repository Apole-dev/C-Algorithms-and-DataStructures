#include <stdio.h>
#include <stdlib.h>

#include "LinkedList/LinkedList.h"

#include "Stack/Stack.h"
int main(void) {
    int arr[10] = {1, 2, 3,5, 43, 6, 7, 8, 9, 10}; // Test Array

    struct Stack* stack = CreateStack(1);

    Push(stack,3);
    WriteLastElement(stack);

    return 0;
}
