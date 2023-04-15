#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in an array
 *	of integers using the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 *	or -1 if value is not present.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, curr;

	if (array != NULL)
	{
		step = sqrt(size);
		prev = curr = 0;
		while (array[curr] < value && curr < size - 1)
		{
			printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
			prev = curr;
			curr = step;
			step += sqrt(size);
		}

		printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

		while (array[prev] <= value && prev <= curr)
		{
			printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

			if (array[prev] == value)
				return (prev);
			prev++;
		}

	}

	return (-1);
}
