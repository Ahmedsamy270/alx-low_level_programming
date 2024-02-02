#include "hash_tables.h"

/**
 * hash_table_set - is a function that add or update an element
 * @ht: is a pointer to the hash table
 * @key: is the key to add
 * @value: is the value with the key
 * Return: 0 If Fail Or 1 If Success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i, index;
	hash_node_t *n;
	char *v_copy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	v_copy = strdup(value);
	if (v_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v_copy;
			return (1);
		}
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(v_copy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = v_copy;
	n->next = ht->array[index];
	ht->array[index] = n;
	return (1);
}
