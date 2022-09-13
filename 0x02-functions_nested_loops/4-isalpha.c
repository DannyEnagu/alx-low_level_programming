#include "main.h"

/**
 * _isalpha - check for alpabets upper or lower case
 *
 * @c: important. expected data type (int)
 *
 * Result: 1 if c is charcter else 0
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c >= 90)
		return (1);
	return (0);
}
