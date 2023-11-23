#include "main.h"

/**
 * clear_bit - is a function that set a value of bit to 0
 * @n: is a pointer to number
 * @index: is index from 0
 * Return: -1 If Fail Or 1 If Success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int x;

	if (index > 64)
	{
		return (-1);
	}

	x = index;

	for (i = 1; x > 0; i *= 2, x--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
