#include "main.h"

/**
 * set_bit -  is a function that set a value of bit to 1
 * @n: is a pointer to number
 * @index: is a posistion to be changeed
 * Return: -1 If Fail Or 1 If Success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
	{
		return (-1);
	}

	for (i = 1; index > 0; index--, i *= 2)
		;

	*n += i;
	return (1);
}
