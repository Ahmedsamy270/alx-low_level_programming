#include "hash_tables.h"

/**
 * hash_table_print - is a function that prints the hash table
 * @ht: is a pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *n;
	unsigned long int i;
	unsigned char c_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (c_flag == 1)
				printf(", ");
			n = ht->array[i];
			while (n != NULL)
			{
				printf("'%s': '%s'", n->key, n->value);
				n = n->next;
				if (n != NULL)
					printf(", ");
			}
			c_flag = 1;
		}
	}
	printf("}\n");
}
