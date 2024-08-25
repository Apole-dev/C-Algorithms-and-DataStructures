//
// Created by Eren on 8/25/2024.
//

#ifndef STACK_H
#define STACK_H

struct Stack {
    int newValue;
    int prevValue;
    struct Stack* Copy;
    struct Stack* tempCopy;
};

// Fonksiyon prototipleri
struct Stack* CreateStack(int firstValue);
void Push(struct Stack* stack, int value);
int Pop(struct Stack* stack);
void WriteLastElement(struct Stack* stack);

#endif // STACK_H

