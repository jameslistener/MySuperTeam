#include <iostream>
#include "FIFO.h"

void init(FIFO &list)
{
	list.length = 0;
	list.head = NULL;
	list.tail = NULL;
}

Element* createElement(int d)
{
	Element* e = (Element*)malloc(sizeof(Element));
	e->data = d;
	e->next = NULL;
	return e;
}

void push(FIFO &list, Element * e)
{
	if (list.head != NULL)
	{
		list.tail->next = e;
		list.tail = e;
		e->next = NULL;
	}
	else
	{
		list.head = e;
		list.tail = e;
		e->next = NULL;
	}
	list.length++;
}

Element * pop(FIFO & list)
{
	Element *e;
	if (list.head == NULL)
	{
		e = NULL;
	}
	else if (list.head == list.tail)
	{
		e = list.head;
		list.head = list.tail = NULL;
		list.length--;
	}
	else
	{
		e = list.head;
		list.head = e->next;
		e->next = NULL;
		list.length--;
	}
	return e;
}

void printList(FIFO & list)
{
	printf("List length: %d\n", list.length);
	for (Element* cur = list.head; cur != NULL; cur = cur->next)
	{
		printf("%d -> ", cur->data);
	}
	printf("\n");
}

void clean(FIFO & list)
{
	Element *e;
	for (Element* cur = list.head; cur != NULL; cur = e)
	{
		e = cur->next;
		free(cur);
	}
	list.head = list.tail = NULL;
	list.length = 0;
}


