#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp == 'e' || alp == 'q')
			++alp;
		putchar(alp);
		++alp;
	}
	putchar('\n');

	return (0);
}
