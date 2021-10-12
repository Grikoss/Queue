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

}

int enQueue(Queue* queue, int value) //добавляет в хвост
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

int deQueue(Queue* queue) // удаляет в голову
{

}

bool isEmpty(Queue* queue)
{

}

void deleteQueue(Queue* queue)
{

}

int main()
{

}