#include "variadic_functions.h"

/**
 * print_numbers - prints  it's argument
 * @separator: seperator (,)
 * @n: number of argument
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (n > 0)
	{
		va_list ap;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator && i + 1 != n)
				printf("%s", separator);
		}
		va_end(ap);

	}
	printf("\n");
}
