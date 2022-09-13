#include "main.h"

/**
 * _isalpha - check for alpabets upper or lower case
 *
 * @c: important. expected data type (int)
 *
 * Return: 1 if c is charcter else 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
