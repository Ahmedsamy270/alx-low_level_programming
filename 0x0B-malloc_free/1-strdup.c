#include "main.h"

/**
 *
 *
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
	return(p);
}
