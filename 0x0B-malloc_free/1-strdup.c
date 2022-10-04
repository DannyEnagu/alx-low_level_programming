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
	int i, len;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len] != '\0') /* get size of str */
		len++;

	new_str = malloc(sizeof(*str) * len + 1);

	if (new_str != NULL)
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
