#include "main.h"

/**
 * print_binary -  is a function that prints a binary represntation of anumber
 * @n: is a pointer to number
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int t;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (t = n, i = 0; (t >>= 1) > 0; i++)
		;

	for (; i >= 0; i--)
	{
		if ((n >> i) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
