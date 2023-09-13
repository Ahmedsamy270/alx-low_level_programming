#include "function_pointers.h"

/**
 * array_iterator - is a function to be excuted
 * @array: is an array to be printed
 * @size: is the size of the array
 * @action: is the pinter to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
