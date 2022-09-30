#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: main argument counter
 * @argv: pointer to main argument vector
 *
 * Return: 0 if argc is less than 2
 *	1 if error
 */

int main(int argc, char *argv[])
{
	int sum = 0, j;

	if (argc == 1)
		printf("%d\n", 0);

	else if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (check_each_strn(argv[j]) == 0)
			{
				sum += atoi(argv[j]);
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}

/**
 * check_each_strn - checks for digit
 * @str: srting input
 *
 * Return: Zero (0) if string is digit
 *	else one (1) on error
 */

int check_each_strn(char str[])
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (!isdigit(str[i]))
			return (1);
	}
	return (0);
}

