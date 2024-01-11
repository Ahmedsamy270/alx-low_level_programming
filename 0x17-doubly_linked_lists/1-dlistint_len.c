#include "lists.h"

/**
 * dlistint_len - is a function that return the number of nodes
 * @h: is a pointer to head node
 * Return: The Number Of Counted Nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
