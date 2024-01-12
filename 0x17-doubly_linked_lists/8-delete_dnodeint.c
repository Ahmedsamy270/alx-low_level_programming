#include "lists.h"

/**
 * delete_dnodeint_at_index -  is a function that delete a node
 * @head: is a pointer to head node
 * @index: is the number of node to be delete
 * Return: -1 If Fail Or 1 If Success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1, *tmp2;
	unsigned int i = 0;

	tmp1 = *head;
	if (tmp1 != NULL)
	{
		while (tmp1->prev != NULL)
			tmp1 = tmp1->prev;
	}
	while (tmp1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = tmp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp2->next = tmp1->next;
				if (tmp1->next != NULL)
					tmp1->next->prev = tmp2;
			}
			free(tmp1);
			return (1);
		}
		tmp2 = tmp1;
		tmp1 = tmp1->next;
		i++;
	}
	return (-1);
}
