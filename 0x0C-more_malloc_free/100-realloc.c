#include"main.h"

/**
 * _realloc - reallocates a memory block using malloc and  free
 * @ptr: pointer to previous memory location
 * @old_size: byte size for ptr
 * @new_size: byte size for new memory block
 *
 * Return: pointer to new memory or
 *	if it fails
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *oldptr, *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);
		free(ptr);
		return (newptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);

	i = 0;
	oldptr = ptr;
	while (i < old_size)
	{
		newptr[i] = oldptr[i];
		i++;
	}

	free(ptr);
	return (newptr);
}
