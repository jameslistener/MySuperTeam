#pragma once
#include "FIFO.h"

struct LIFO
{
	int length;
	Element *head;
};

void init(LIFO &list);

void push(LIFO &list, Element *e);

Element* pop(LIFO &list);

void printList(LIFO &list);

void clean(LIFO &list);