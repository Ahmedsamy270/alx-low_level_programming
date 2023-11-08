#include "function_pointers.h"

/**
 * print_name - is a function that prints the name
 * @name: is the name to be printed
 * @f: is the pointer to name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
