#pragma once

#define NULL 0

struct Element
{
	int data;
	Element* next;
};

struct FIFO
{
	int length;
	Element *head, *tail;
};

void init(FIFO &list);

Element* createElement(int d);

void push(FIFO &list, Element *e);

Element* pop(FIFO &list);

void printList(FIFO &list);

void clean(FIFO &list);