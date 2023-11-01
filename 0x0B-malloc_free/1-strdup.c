#include "main.h"
#include <stdlib.h>

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
		return (NULL);
	p = (char *)malloc(sizeof(str));
	if (p == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[i] = '\0';
	return (p);
}
