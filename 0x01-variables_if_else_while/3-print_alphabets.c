
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in lowercase and uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alp = 'a';
	char ALP = 'A';

	/*prints a - z*/
	while (alp <= 'z')
	{
		putchar(alp);
		++alp;
	}

	/*print A - Z*/
	while (ALP <= 'Z')
	{
		putchar(ALP);
		++ALP;
	}
	putchar('\n');

	return (0);
}
