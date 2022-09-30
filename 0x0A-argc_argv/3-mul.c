#include "main.h"

/**
 * main - multiply 2 numbers
 *
 * @argc: argument count
 * @argv: pointer to artgument vector
 *
 * Return: success (0),
 *	error (1)
 */

int main(int argc, char *argv[])
{
	int prd = 1, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			prd *= atoi(argv[i]);
		}
		printf("%d\n", prd);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
