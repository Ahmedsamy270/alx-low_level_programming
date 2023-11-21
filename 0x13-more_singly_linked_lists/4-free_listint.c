#include "lists.h"

/**
 * free_listint - is a function that freeies all nodes
 * @head: is apointer to head of nodes
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
