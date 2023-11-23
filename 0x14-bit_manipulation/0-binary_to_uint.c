#include "main.h"

/**
 * binary_to_uint -  is a function that convert binary to unsigned
 * @b: is a pointer to number
 * Return: The Unsigned Number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		i = i * 2 + (*b++ - '0');
	}
	return (i);
}
