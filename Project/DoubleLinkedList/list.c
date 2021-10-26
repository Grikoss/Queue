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
    if (position->position->next == NULL)
    {
        return true;
    }
    return false;
}

void first(List* list, Position* position)
{
    position->position = list->head;
}

void last(List* list, Position* position)
{
    position->position = list->tail;
}

void next(Position* position) // �� ������ ��������� �� NULL
{

}

void previous(Position* position) // �� ������ ��������� �� NULL
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