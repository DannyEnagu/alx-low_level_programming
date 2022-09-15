#include "main.h"

/**
 * print_diagonal - print '\' diagonal n times
 *
 * @n: funtion param, place holder type int
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar('_')
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
