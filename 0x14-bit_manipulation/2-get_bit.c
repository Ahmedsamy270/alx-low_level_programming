#include "main.h"

/**
 * get_bit - is a function that return a value of bit as agiven index
 *  @n: is a pointer to number
 *  @index: is starting from 0 of bit we need to get
 * Return: -1 If Fail Or I
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	i = n >> index;
	return (i & 1);
}
