#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory by malloc function
 * @b: number of bytes to allocate in memory
 *
 * Return: Return  (98) If NULL - Return Pointer If Success
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
