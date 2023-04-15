#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array
 *	of integers using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The first index where value is located
 *	or -1 if value is not present.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, r, l, m;

	if (array)
	{
		r = size - 1;
		l = 0;
		while (l <= r)
		{
			m = l + (r - l) / 2;

			printf("Searching in array: ");
			for (i = l; i <= r; i++)
			{
				printf("%d", array[i]);
				if (i < r)
					printf(", ");
			}
			printf("\n");

			if (array[m] == value)
				return (m);

			if (array[m] < value)
				l = m + 1;
			else
				r = m - 1;
		}
	}

	return (-1);
}
