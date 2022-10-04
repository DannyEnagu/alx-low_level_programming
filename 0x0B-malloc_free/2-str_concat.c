#include "main.h"

/**
 * str_concat - function that joints two strings
 * @s1: 1st string parameter
 * @s2: 2nd string parameter
 *
 * Return: s3(pointer to concatenated string)
 *	NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j;

	s3 = malloc(sizeof(*s1) * sizeof(*s2));

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	if (s3 != NULL)
	{

		for (i = 0; s1[i] != '\0'; ++i) /*get lenght of s1*/
			*(s3 + i) = s1[i];

	/*loop over s2 length it's  element */
		for (j = 0; s2[j] != '\0'; j++)
			s3[i + j] = s2[j];

	}
	else
		return (NULL);

	return (s3);
}
