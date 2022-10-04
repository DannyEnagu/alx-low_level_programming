#include "main.h"

/**
 * argstostr - concatenate all argument vectors
 * @ac: argument count
 * @av: argument vectors
 *
 * Return: pointer to new string or
 *      NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int h, i, j, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (h = 0; h < ac; h++)
	{
		i = 0;
		/*while (av[h][i] != '\0')
		{
			len++;
			i++;
		} */
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str != NULL)
	{
		j = 0;
		for (h = 0; h < ac; h++)
		{
			i = 0;
			while (av[h][i] != '\0')
			{
				str[j] = av[h][i];
				i++;
				j++;
			}
			str[j] = '\n';
			j++;
		}
		return (str);
	}
	else
		return (NULL);
}
