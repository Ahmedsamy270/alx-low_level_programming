#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - memorry allocat by malloc
 * @b: size of memory
 * Return: Pointer To The New Memory Allocate
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
