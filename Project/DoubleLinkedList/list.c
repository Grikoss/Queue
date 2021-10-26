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

void remove(List* list, Position* position)
{

}

void deletePosition(Position* position)
{
    free(position);
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