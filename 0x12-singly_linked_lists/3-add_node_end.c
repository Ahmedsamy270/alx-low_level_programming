#include "lists.h"

/**
 * add_node_end - is a function that adds a node at the end
 * @head: is a ponter to the head of a node
 * @str: is a string to be stored
 * Return: Address Of The New Node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *ptr;
	unsigned int i, length = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		length++;

	node->len = length;
	node->next = NULL;
	ptr = *head;

	if (ptr == NULL)
		*head = node;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = node;
	}
	return (*head);
}
