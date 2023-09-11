#include <stdio.h>
#include "dog.h"

/**
 * init_dog - is the function
 * @d: is the pointer to function
 * @name: the dog`s name
 * @age: the dog`s age
 * @owner: the dog`s owner
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
