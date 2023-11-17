#include "lists.h"

/**
 * print_list -  is a function that prints all elementof list_t
 * @h: pointer to linked list
 * Return: Number Of Nodes
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		counter++;
	}
	return (counter);
}
