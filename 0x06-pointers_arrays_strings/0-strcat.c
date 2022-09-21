#include "main.h"

/**
 * _strcat - A program that joins two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: dest - full string after concatenations
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i) /*get lenght of dest*/
		;

	/*loop over src length picking it's element*/
	for (j = 0; src[j] != '\0'; j++)
		/*using "*(var + x)" the array syntax*/
		dest[i + j] = src[j];

	return (dest);
}
