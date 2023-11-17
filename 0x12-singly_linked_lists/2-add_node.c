#include "lists.h"

/**
 * add_node - is a function that add node at biginning
 * @head: ios the head of node
 * @str: is a string to be stored
 * Return: Address Of New Element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int i, length = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		length++;

	node->len = length;
	node->next = *head;
	*head = node;

	return (*head);
}
