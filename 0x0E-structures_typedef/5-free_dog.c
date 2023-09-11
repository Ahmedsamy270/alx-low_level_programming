#include <stdio.h>
#include "dog.h"

/**
 * free_dog - is a function to free
 * @d: is the struct to be free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
