//
// Created by Eren on 8/26/2024.
//

#include <stdbool.h>

#define MAX_SIZE 50

typedef struct{
    int elements[MAX_SIZE];
    int front;
    int rear;

}Queue;


/**
 * Initializes a queue by setting the rear and front pointers to 0.
 *
 * @param queue Pointer to the queue to be initialized.
 *
 * @return None
 *
 * @throws None
 */
void InitQueue(Queue *queue) {
    queue->rear = 0;
    queue->front = -1;
}

/**
 * Checks if the queue is empty.
 *
 * @param queue Pointer to the queue.
 *
 * @return True if the queue is empty, false otherwise.
 */
bool isQueueEmpty(Queue *queue) {
    if (queue->rear - queue->front == 1) return true;
    return false;
}
bool isQueueFull(Queue *queue) {
    if (queue->rear == MAX_SIZE) return true;
    return false;
}


/**
 * Enqueues an element to the queue.
 *
 * @param queue Pointer to the queue.
 * @param element The element to be enqueued.
 *
 * @throws None
 */
void EnQueue(Queue *queue ,int element) {
    if(isQueueFull(queue)) return;
    queue->elements[queue->rear] = element;
    queue->rear ++;
}

/**
 * Dequeues an element from the queue.
 *
 * @param queue Pointer to the queue.
 * @return The dequeued element.
 *
 * @throws None
 */
int DeQueue(Queue *queue) {
    queue->front ++;
    return queue->elements[queue->front -1];
}

/**
 * Get the top element of the queue.
 *
 * @param queue The queue from which to get the top element.
 * @return The top element of the queue, or -1 if the queue is empty.
 */
int Top(Queue *queue){
    if (isQueueEmpty(queue)) return -1;
    return queue->elements[queue->front+1];
}

