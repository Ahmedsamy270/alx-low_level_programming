#include "lists.h"

/**
 * list_len -  is a function that return the number of nodes
 * @h: is a pointer to node
 * Return: Number Of Nodes
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
