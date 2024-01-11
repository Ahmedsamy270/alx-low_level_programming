#include "lists.h"

/**
 * add_dnodeint_end -  is a function that add a new node at the end
 * @head: is a pointer to head node
 * @n: is a number of data inside new node
 * Return: The Adress Of The new Node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *h;

		tmp = malloc(sizeof(dlistint_t));
		if (tmp == NULL)
			return (NULL);

		tmp->n = n;
		tmp->next = NULL;
		h = *head;

		if (h != NULL)
		{
			while (h->next != NULL)
				h = h->next;
			h->next = tmp;
		}
		else
		{
			*head = tmp;
		}
		tmp->prev = h;
		return (tmp);
}
