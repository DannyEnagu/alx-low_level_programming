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
	strcat(dest, src);
	return (dest);
}
