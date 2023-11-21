#include "lists.h"

/**
 * pop_listint - is a function that delet the head node
 * @head: is a pointer to head node
 * Return: The Deleted Number Of The Head Node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
