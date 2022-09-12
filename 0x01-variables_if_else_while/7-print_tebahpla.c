#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		--alp;
	}
	putchar('\n');

	return (0);
}
