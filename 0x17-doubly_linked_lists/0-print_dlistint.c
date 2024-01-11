#include "lists.h"

/**
 * print_dlistint - is a function that prints the nodes elements
 * @h: is a pointer to hea node
 * Return: Number Of Counted Nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
