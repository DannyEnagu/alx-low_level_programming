#include "main.h"

/**
 * main - program that calculate and print
 *      minimum number of coins to make change
 *      for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int r[] = {25, 10, 5, 2, 1};
	int amt, len, change, i;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);
	len = sizeof(r) / sizeof(r[0]);
	if (amt < 0)
		printf("%d\n", 0);
	else
	{
		change = 0;
		while (amt > 0)
		{
			for (i = 0; i < len; i++)
			{
				if (amt >= r[i])
				{
					amt -= r[i];
				}
			}
			change += 1;
		}
	}

	printf("%d\n", change);

	return (0);
}
