#include "main.h"
/**
 * print_alphabet_x10 - A program to pint a - z 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i = 0, c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);

		_putchar('\n');
		i++;
	}
}
