#include "lists.h"

/**
 * free_dlistint -  is a function that frees all the node
 * @head: is a pointer to the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}

}
