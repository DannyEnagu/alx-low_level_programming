#include"main.h"

/**
 * print_last_digit - prints last digit of a number.
 *
 * @n: type int
 *
 * Return: num
*/

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		num = -1 * (n % 10);
	else
		num = n % 10;

	_putchar(num);
	return (num);
}
