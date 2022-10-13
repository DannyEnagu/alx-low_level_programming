#include "variadic_functions.h"

/**
 * print_strings - prints  it's string arguments
 * @separator: seperator (,)
 * @n: number of argument
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	if (n > 0)
	{
		va_list ap;

		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");

			if (separator && i + 1 != n)
				printf("%s", separator);
		}
		va_end(ap);

	}
	printf("\n");
}
