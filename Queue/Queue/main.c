#include <stdlib.h>;
#include <stdbool.h>

typedef struct
{
    int value;
    QueueElement* next;
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