#include "main.h"

/**
 * array_range - creates an array of integers
 *	from min - max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a pointer to array or NULL if fail
 */

int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);

}
