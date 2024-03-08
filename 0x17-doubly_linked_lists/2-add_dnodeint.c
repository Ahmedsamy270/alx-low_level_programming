#include "lists.h"

/**
 * add_dnodeint - is a function that add a new node at the beginning
 * @head: is a pointer to the head node
 * @n: is the number of data in the new node
 * Return: The Adress Of The Head Node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *h;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (Null);

	tmp->n = n;
	tmp->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
		tmp->next = h;
		if (h != NULL)
			h->prev = tmp;

		*head = tmp;

	return (tmp);
}
