#include "main.h"

/**
 * create_array - function that creates an empty
 *		array of char type
 * @size: size of the array
 * @c: initial char
 *
 * Return: pointer to array or NULL if error
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array)
	{
		i = 0;
		while (i < size)
		{
			*(array + i) = c;
			i++;
		}
	
		return (array);
	}	
	else
		return (NULL);
}
