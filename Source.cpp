#include <iostream>
#include "FIFO.h"
#include "LIFO.h"

int main()
{
	LIFO myList;
	init(myList);
	int n = 0;
	scanf_s("%d", &n);
	Element* e;
	int tmp;
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &tmp);
		e = createElement(tmp);
		push(myList, e);
	}

	printList(myList);

	e = pop(myList);
	printf("Got popped: %d\n", e->data);
	free(e);

	e = pop(myList);
	printf("Got popped: %d\n", e->data);
	free(e);

	e = pop(myList);
	printf("Got popped: %d\n", e->data);
	free(e);

	printList(myList);

	clean(myList);

	system("pause");
	return 0;
}