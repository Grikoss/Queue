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
    return calloc(1, sizeof(List));
}

Position* createPosition()
{
    return calloc(1, sizeof(Position));
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

void next(Position* position) // Не забудб проверить на NULL
{

}

void previous(Position* position) // Не забудб проверить на NULL
{

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