#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int value;
    struct QueueElement* next;
}QueueElement;

typedef struct
{
    QueueElement* head;
    QueueElement* tail;
}Queue;

Queue* createQueue(void)
{

}

void enQueue(Queue* queue, int value) //добавляет в хвост
{

}

int deQueue(Queue* queue) // удаляет в голову
{
    int number = queue->head->value;
    QueueElement* temporaryQueueElement = queue->head;
    queue->head = queue->head->next;
    free(temporaryQueueElement);
    return number;
}

bool isEmpty(Queue* queue)
{

}

void deleteQueue(Queue* queue)
{

}

int main()
{
    QueueElement* queueElement = NULL;
    QueueElement queueElement1 = { .value = 10, .next = queueElement};
    QueueElement queueElement2 = { .value = 20, .next = &queueElement1};
    Queue* queue = malloc(sizeof(Queue));
    queue->head = &queueElement2;
    queue->tail = queueElement;
}