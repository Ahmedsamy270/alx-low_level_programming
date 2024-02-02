#include "hash_tables.h"

/**
 * hash_table_get - is a function that retrieve the value assoiated with
 * the key in hash table
 * @ht: pointer to the hash table
 * @key: is the key to get the value
 * Return: Null If Not Match Or The Value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned long int index;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	n = ht->array[index];
	while (n && strcmp(n->key, key) != 0)
		n = n->next;

	return ((n == NULL) ? NULL : n->value);
}
