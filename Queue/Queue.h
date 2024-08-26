//
// Created by Eren on 8/26/2024.
//

#ifndef QUEUE_H
#define QUEUE_H
#define MAX_SIZE 50
#include <stdbool.h>

typedef struct{
    int elements[MAX_SIZE];
    int front;
    int rear;

}Queue;
void InitQueue(Queue *queue);
bool isQueueEmpty(Queue *queue);
void EnQueue(Queue *queue ,int element);
int DeQueue(Queue *queue);
int Top(Queue *queue);
#endif //QUEUE_H
