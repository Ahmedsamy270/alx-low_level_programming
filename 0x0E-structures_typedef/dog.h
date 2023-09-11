#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is the function
 * @name: is the name
 * @age: is the age
 * @owner: is the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
