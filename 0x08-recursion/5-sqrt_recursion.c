#include "main.h"

/**
 * _sqrt_recursion - function to find the square
 *		root of a given number
 * @n: interger
 *
 * Return: the square root of n
 *	or -1 on error
 */

int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

/**
 * _square - function takes in n
 * @n: integer
 * @i: integer
 *
 * Return: square root of n
 */

int _square(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_square(n, i + 1));
}
