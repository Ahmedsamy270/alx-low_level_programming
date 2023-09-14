#include "variadic_functions.h"

/**
 * print_strings -  is the function to print a string
 * @separator: is the coma to seperate between them
 * @n: is the numbers
 * Return: Printed String Words
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	
	va_list list;

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	
	va_end(list);
}
