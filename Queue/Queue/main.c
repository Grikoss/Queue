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
    struct QueueElement* head;
    struct QueueElement* tail;
}Queue;

Queue* createQueue(void)
{

}

void enQueue(Queue* queue, int value) //��������� � �����
{

}

int deQueue(Queue* queue) // ������� � ������
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