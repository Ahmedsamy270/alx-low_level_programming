#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - is a function that`s make the length of string
 *@s: is the string to get length of
 * Return: Length Of The String
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - is afunction that coppies the string
 * @dest: is an pointer to an puffer in which we copy the string
 * @src: is the string to be copy
 * Return: Pointer To Dust
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creat a new dog
 * @name: dog`s name
 * @age: dog`s age
 * @owner: dog`s owner
 * Return: Null If Fail , Pointer If Success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}