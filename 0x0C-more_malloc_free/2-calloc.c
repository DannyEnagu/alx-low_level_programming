#include "main.h"

/**
 * _calloc - Create memory allocation for array using malloc
 * @nmemb: number of array items
 * @size: size of type
 *
 * Return: pointer to allocated memory or NULL on error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	return (array);
}
