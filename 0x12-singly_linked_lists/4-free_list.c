#include "lists.h"

/**
 * free_list -  is a function that frees all the nodes
 * @head: is a pointer to head node
 */

void free_list(list_t *head)
{
	list_t *node, *n_node;

	if (!head)
		return;

	node = head;
	while (node)
	{
		n_node = node->next;
		free(node->str);
		free(node);
		node = n_node;
	}
}
