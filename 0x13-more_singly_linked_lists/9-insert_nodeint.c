#include "lists.h"

/**
 * insert_nodeint_at_index - is a function that add node at specefic location
 * @head: is a pointer to head node
 * @idx: is the place where node should be added
 * @n: is a number of the n in node
 * Return: The Adress Of Tmp2As A New Node Or NULL If Fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head, *tmp2;
	unsigned int i;

	tmp2 = malloc(sizeof(listint_t));
	if (tmp == NULL || head == NULL)
		return (NULL);

	tmp2->n = n;
	tmp2->next = NULL;

	if (idx == 0)
	{
		tmp2->next = *head;
		*head = tmp2;
		return (tmp2);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			tmp2->next = tmp->next;
			tmp->next = tmp2;
			return (tmp2);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
