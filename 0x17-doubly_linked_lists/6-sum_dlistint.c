#include "lists.h"

/**
 * sum_dlistint - is a function that sums all the nodes
 * @head: is a pointer to the head node
 * Return: The Total Of The Sum
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			total += head->n;
			head = head->next;
		}
	}
	return (total);
}
