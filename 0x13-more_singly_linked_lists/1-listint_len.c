#include "lists.h"

/**
 * listint_len -  is a function that returns length of a linked list
 * @h: is a pointer to head of a linked list
 * Return: Number Of Printed Elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
