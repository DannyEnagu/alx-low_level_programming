#include"main.h"

/**
 * main - Entry point
 *
 * Description: Prints the sum of even-valued
 *		Fibonacci sequence not exceed
 *		4million
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;
	float overall_sum;

	while (1)
	{
		sum = num1 + num2;

		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			overall_sum += sum;

		num1 = num2;
		num2 = sum;
	}
	printf("%.0f\n", overall_sum);

	return (0);
}
