#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing aplhabet from a-z
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char apl = 'a';

	while (apl <= 'z')
	{
		putchar(apl);
		++apl;
	}
	putchar('\n');

	return (0);
}
