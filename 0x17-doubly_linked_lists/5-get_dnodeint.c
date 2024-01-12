#include "lists.h"

/**
 * get_dnodeint_at_index -  is a function that return a node at index
 * @head: is the head of the node
 * @index: is the requeried node number
 * Return: The Adress Of Requiered Node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	while (head != NULL)
	{
		if (i == index)
			break;

		head = head->next;
		i++;
	}
	return (head);

}
