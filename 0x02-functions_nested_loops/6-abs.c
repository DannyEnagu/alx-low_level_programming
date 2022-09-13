#include "main.h"
/**
 * _abs- A funtion to find the absolute
 *	value of an integer
 *
 * @n: accepted value - type int
 * 
 * Return: Always 0 (Success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
