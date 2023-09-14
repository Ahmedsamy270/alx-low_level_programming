#include "variadic_functions.h"

/**
 * print_numbers - is a function that prints numbers
 * @separator: is the coma between the numbers
 * @n: is the number of numbers to be printed
 *Return: The printed Numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
