#include "main.h"

/**
 * _strdup - function  that copies a string
 *	parameter
 * @str: string parameter
 *
 * Return: pointer to new string or
 *	NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);

	new_str = malloc(sizeof(*str));

	if (new_str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			*(new_str + i) = str[i];
			i++;
		}
		return (new_str);
	}
	else
		return (NULL);

}
