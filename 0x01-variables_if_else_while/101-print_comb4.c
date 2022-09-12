#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *            combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1 = 0;
	int num2 = 0; 
	int num3 = 0;

	while (num1 <= 9)
	{

		while (num2 <= 9)
		{

			while (num3 <= 9)
		OOB	{
				if (num1 != num2 &&
				    num1 < num2 &&
				    num2 != num3 &&
				    num2 < num3)
				{
					putchar(num + 48);
					putchar(num + 48);
					putchar(num + 48);

					if (num1 + num2 + num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}	
				}
				++num3;
			}
			++num2;
		}
		++num1;
	}
	putchar('\n');

	return (0);
}
