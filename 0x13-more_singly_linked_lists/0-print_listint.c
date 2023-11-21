#include "lists.h"

/**
 * print_listint -  is a function that prints elements in linked list
 * @h: is a pointer to head of list
 * Return: Number Of Printed Nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
