#include "lists.h"

/**
 * add_nodeint_end - is a function that add node at the end
 * @head: is a pointer to head of nodes
 * @n: is an intger to print in node
 * Return: Adress Of New Node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp = *head;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}
	
	while (tmp->next)
		tmp = tmp->next;

	tmp->next = ptr;
	return (ptr);
}
