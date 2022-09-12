#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers from 0-9 using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		/*convert num to ASCII representation*/
		putchar(num + '0');
		++num;
	}
	putchar('\n');

	return (0);
}
