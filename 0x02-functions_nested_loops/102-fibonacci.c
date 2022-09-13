#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *		starting with 1 and 2 folled by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, sum;

	for (i = 0; i < 50; ++i)
	{
		sum = num1 + num2;
		printf("%lu", sum);

		num1 = num2;
		num2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
