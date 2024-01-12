#include "lists.h"

/**
 * insert_dnodeint_at_index -  is a function that
 * inserting a node at speciefic location
 * @h: is a pointer to head node
 * @idx: is the location of the new node
 * @n: is the value of the node
 * Return: The Adress Of The New Node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *he, *ne = NULL;
	unsigned int i;

	if (idx == 0)
		ne = add_dnodeint(h, n);
	else
	{
		he = *h;
		i = 1;
		if (he != NULL)
		{
			while (he->prev != NULL)
				he = he->prev;
		}
		while (he != NULL)
		{
			if (i == idx)
			{
				if (he->next == NULL)
					ne = add_dnodeint_end(h, n);
				else
				{
					ne = malloc(sizeof(dlistint_t));
					if (ne != NULL)
					{
						ne->n = n;
						ne->next = he->next;
						ne->prev = he;
						he->next->prev = ne;
						he->next = ne;
					}
				}
				break;
			}
			he = he->next;
			i++;
		}
	}
	return (ne);
}
