#include "hash_tables.h"

/**
 * key_index - is a function that get the index at which key
 * @key: is the key to get the index of
 * @size: is the size of the array of trhe hash table
 * Return: Index Of The Key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
