#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

struct Stack* CreateStack(int firstValue) {
    struct Stack* newStack = malloc(sizeof(struct Stack));
    newStack->newValue = firstValue;
    newStack->prevValue = -1;
    newStack->Copy = newStack;
    newStack->tempCopy = newStack;
    return newStack;
}

void Push(struct Stack* stack, int value) {
    struct Stack* newOne = CreateStack(value);
    newOne->prevValue = stack->Copy->newValue;
    stack->Copy = newOne;
    stack->tempCopy = stack->Copy;
}

int Pop(struct Stack* stack) {
    if(stack->tempCopy != NULL) {
        free(stack->tempCopy);
        stack->tempCopy = NULL;
        return 0;
    }
    return -1;
}

void WriteLastElement(struct Stack* stack) {
    printf("Last VALUE: %d\n", stack->Copy->newValue);
}
