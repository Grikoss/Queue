#include <stdbool.h>
#include <stdlib.h>
#include "list.h"

typedef struct Element
{
    int value;
    struct Element* next;
    struct Element* previous;
} Element;

typedef struct List
{
    Element* head;
    Element* tail;
} List;

typedef struct Position
{
    Element* position;
} Position;

List* createList()
{

}

Position* createPosition()
{

}

bool isEnd(Position* position)
{

}

void first(Position* position)
{

}

void last(Position* position)
{

}

int next(Position* position) // Не забудб проверить на NULL
{
    if (position->position->next == NULL)
    {
        return -1;
    }
    Position* newPosition = calloc(1, sizeof(position));
    newPosition->position = position->position->next; 
    return 0;
}

int previous(Position* position) // Не забудб проверить на NULL
{
    if (position->position->previous == NULL)
    {
        return -1;
    }
    Position* newPosition = calloc(1, sizeof(position));
    newPosition->position = position->position->previous;
    return 0;
}

void remove(List* list, Position* position)
{

}

void deletePosition(Position* position)
{

}

int value(Position* position)
{

}

void setValue(Position* position, int value)
{

}

void addBefore(List* list, Position* position)
{

}

void addNext(List* list, Position* position)
{

}