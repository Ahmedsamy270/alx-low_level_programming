#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
/**
 * struct dog - is the function
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
