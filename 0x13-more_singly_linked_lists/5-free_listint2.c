#include "lists.h"

/**
 * free_listint2 - is a function that free nodes and set head to null
 * @head: is a pointer to head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
