#include "main.h"

/**
 * *_strdup - is a function that print a string
 * @str: is a pointer to a string
 * Return: Pointer Of Anew String
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i;

	if (str == NULL)
		return (0);
	p = (char *)malloc(sizeof(str));
	if (p == NULL)
		return (0);
	for (i = 0; i < (sizeof(str)); i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
