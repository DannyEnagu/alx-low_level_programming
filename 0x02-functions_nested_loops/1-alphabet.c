#include "main.h"

/**
 * print_alphabet - A program that prints a - z
 *		using _putchar 
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		_putchar(c);
	_putchar('\n');
}
