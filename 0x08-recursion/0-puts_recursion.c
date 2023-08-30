#include "main.h"
/**
 * _print_rev_recursi - function that prints a string
 * @s : is a sting to be printed
 * @i : is an integer for loop
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');

}
