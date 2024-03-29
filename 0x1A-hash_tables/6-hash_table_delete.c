#include "hash_tables.h"

/**
 * hash_table_delete - is a function that delete hash table
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *n, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			n = ht->array[i];
			while (n != NULL)
			{
				temp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
