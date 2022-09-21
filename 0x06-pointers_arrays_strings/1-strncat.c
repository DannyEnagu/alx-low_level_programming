#include "main.h"

/**
 * _strncat - A program that join two strings
 *		starting from point n
 *
 * @dest: destination string
 * @src: source string
 * @n: no of byte from source string
 *
 * Return: dest (i.e dest + src to n)
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i) /*get lenght of dest*/
		;
	/*loop over src length picking it's element*/
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0'; /*null terminate dest*/

	return (dest);
}
