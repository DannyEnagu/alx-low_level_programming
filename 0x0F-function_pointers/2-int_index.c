#include "function_pointers.h"

/**
 * int_index - searches an array for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to function
 *
 * Return: index of array  on success or
 *	-1 if fails
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

