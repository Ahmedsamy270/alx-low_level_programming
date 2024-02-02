#include "hash_tables.h"

/**
 * hash_table_create - is a function that creats a hash table
 * @size: is the size of array
 * Return: NUll If Error Or Ptr If Success
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i;

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);

	ptr->size = size;
	ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr->array[i] = NULL;

	return (ptr);
}
