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

	h = *head;
	if (h == NULL)
	{
		h = malloc(sizeof(dlistint_t));

		if (h == NULL)
			return (NULL);

		h->next = NULL;
		h->n = n;
		h->prev = NULL;
		*head = h;

	}

	else
	{
		tmp = malloc(sizeof(dlistint_t));

		if (tmp == NULL)
			return (NULL);

		tmp->n = n;
		tmp->prev = NULL;
		tmp->next = h;
		h->prev = tmp->next;
		h = tmp;
		*head = h;
	}
	return (tmp);
}
