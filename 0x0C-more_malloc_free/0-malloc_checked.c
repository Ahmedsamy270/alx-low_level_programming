#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - memorry allocat by malloc
 * @b: size of memory
 * Return: Void
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
