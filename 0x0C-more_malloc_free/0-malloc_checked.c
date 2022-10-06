#include "main.h"

/**
 * malloc_checked - A function that allocate memory
 *		using malloc
 * @b: byte size
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
