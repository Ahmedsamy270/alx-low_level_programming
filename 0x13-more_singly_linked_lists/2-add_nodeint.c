#include "lists.h"

/**
 * add_nodeint - is a function that add node at the beginning of linked list
 * @head: is a pointer to head of linked list
 * @n: is an integer to print add in linked list node
 * Return: Location Of New Node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
