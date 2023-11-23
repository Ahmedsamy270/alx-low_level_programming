#include "main.h"

/**
 * flip_bits - is a function that flip two numbers
 * @n: is the first number
 * @m: the second number
 * Return: Bits Needed To Be Fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	int count = 0;

	while (i)
	{
		count++;
		i &= (i - 1);
	}
	return (count);

}
