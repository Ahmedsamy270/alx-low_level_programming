#include "main.h"

/**
* _print_rev_recursion: is an function which recieves the s.
*@i: is an integer.
*@j: is an integer.
*@counter: is an integer.
*/
void _print_rev_recursion(char *s)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		count++;
	}
	for (j = count; s[j] >= 0; j--)
	{
		_putchar (s[j]);
	}
}
