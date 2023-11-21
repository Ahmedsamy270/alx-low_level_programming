#include "lists.h"

/**
 * get_nodeint_at_index - is a function that return the nth node
 * @head: is a pointer to head node
 * @index: is the number of the required node to return
 * Return: the Node If Exist Or NULL If NOt
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i;

	for (i = 0; tmp && i < index; i++)
		tmp = tmp->next;

	return (tmp ? tmp : NULL);
}
