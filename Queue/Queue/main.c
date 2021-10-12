#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct
{
    int value;
    struct QueueElement* next;
}QueueElement;

typedef struct
{
    struct QueueElement* head;
    struct QueueElement* tail;
}Queue;

Queue* createQueue(void)
{
    Queue* newQueue = calloc(1,sizeof(Queue));         
    if (newQueue == NULL)
    {
        return NULL;
    }
    return newQueue;
}


int enQueue(Queue* queue, int value) //äîáàâëÿåò â õâîñò
{
    QueueElement* element = calloc(1, sizeof(QueueElement));
    if (element == NULL)
    {
        return 1;
    }

    element->value = value;
    element->next = queue->tail;
    queue->tail = element;
    return 0;
}

int deQueue(Queue* queue)
{

}

bool isEmpty(Queue* queue)
{
    return queue->head == NULL;
}

void deleteQueue(Queue* queue)
{
    while (!isEmpty(queue))
    {
        QueueElement* oldHead = queue->head;
        queue->head = queue->head->next;
        free(oldHead);
    }

    free(queue);
}

int main()
{

}