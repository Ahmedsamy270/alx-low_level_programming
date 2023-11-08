#include "function_pointers.h"

/**
 * int_index - is a function for searching for ingerts
 * @array: is an array to search in
 * @size: is the size of the array
 * @cmp: is the pointer to the function
 * Return: (I) if Success OtherWise (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
