//
// Created by Eren on 8/25/2024.
// Arrays can be used as stack. This is my implementation.
// I did not chechk for null situations.
// Use it at your own risk.
//

#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * Creates a new stack with a given initial value.
 *
 * @param firstValue The initial value for the new stack.
 *
 * @return The newly created stack.
 *
 * @throws None.
 */
struct Stack* CreateStack(int firstValue) {
    struct Stack* newStack = malloc(sizeof(struct Stack));
    newStack->newValue = firstValue;
    newStack->prevValue = -1;
    newStack->Copy = newStack;
    newStack->tempCopy = newStack;
    return newStack;
}

/**
 * Pushes a new value to the top of the stack.
 *
 * @param stack Pointer to the stack.
 * @param value The value to be pushed.
 *
 * @throws None.
 */
void Push(struct Stack* stack, int value) {
    struct Stack* newOne = CreateStack(value);
    newOne->prevValue = stack->Copy->newValue;
    stack->Copy = newOne;
    stack->tempCopy = stack->Copy;
}

/**
 * Pops the top element from a stack.
 *
 * @param stack A pointer to the stack.
 *
 * @return 0 if the pop was successful, -1 if the stack was empty.
 *
 * @throws None.
 */
int Pop(struct Stack* stack) {
    if(stack->tempCopy != NULL) {
        free(stack->tempCopy);
        stack->tempCopy = NULL;
        return 0;
    }
    return -1;
}

/**
 * Writes the last value of the stack to the console.
 *
 * @param stack pointer to the stack
 *
 * @return None
 *
 * @throws None
 */
void WriteLastElement(struct Stack* stack) {
    printf("Last VALUE: %d\n", stack->Copy->newValue);
}
