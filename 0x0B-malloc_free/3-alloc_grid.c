#include "main.h"

/**
 * alloc_grid - Creates a 2D array of
 *	integer
 * @width: width value
 * @height: heigth value
 *
 * Return: pointer to 2D array or
 *	NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j; 
	int **a;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}	

	i = 0;
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		j = 0;

		a[i] = malloc(width * sizeof(int));

		if (a[i] == NULL)
		{
			while (i >= 0)
			{
				free(a[i]);
				i--;
			}
			free(a);
			return (NULL);
		}

		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}

	return (a);
}
