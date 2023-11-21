#include "lists.h"

/**
 * sum_listint - is a function that sum all the listint nodes
 * @head: is a pointer to head node
 * Return: The Sum Of Nodes Or 0 If NULL
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
