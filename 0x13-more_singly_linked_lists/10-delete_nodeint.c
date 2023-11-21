#include "lists.h"

/**
 * delete_nodeint_at_index - is a function that delete special node with index
 * @head: is a pointer to head node
 * @index: is a number of the wanted node to be deleted
 * Return: -1 If NULL Or 1 If Success
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp = *head, *tmp2 = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		free(tmp2);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}

	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);

	return (1);
}
