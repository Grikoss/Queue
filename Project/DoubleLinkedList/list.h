#pragma once

#include <stdbool.h>
typedef struct List List;

typedef struct Position Position;

List* createList();

Position* createPosition();

bool isEnd(Position* position);

void first(List* list, Position* position);

void last(List* list, Position* position);

void next(Position* position);

void previous(Position* position);

void removeFirst(List* list, Position* position);

void removeLast(List* list, Position* position);

void remove(List* list, Position* position);

void deletePosition(Position* position);

int value(Position* position);

void setValue(Position* position, int value);

void addBefore(List* list, Position* position);

void addNext(List* list, Position* position);