#include <iostream>
#include "LIFO.h"

void init(LIFO &list)
{
	list.length = 0;
	list.head = NULL;
}

void push(LIFO &list, Element * e)
{
	e->next = list.head;
	list.head = e;
	list.length++;
}

Element * pop(LIFO & list)
{
	Element *e;
	if (list.head == NULL)
	{
		e = NULL;
	}
	else
	{
		e = list.head;
		list.head = e->next;
		list.length--;
		e->next = NULL;
	}
	return e;
}

void printList(LIFO & list)
{
	printf("List length: %d\n", list.length);
	for (Element* cur = list.head; cur != NULL; cur = cur->next)
	{
		printf("%d -> ", cur->data);
	}
	printf("\n");
}

void clean(LIFO & list)
{
	Element *e;
	for (Element* cur = list.head; cur != NULL; cur = e)
	{
		e = cur->next;
		free(cur);
	}
	list.head = NULL;
	list.length = 0;
}