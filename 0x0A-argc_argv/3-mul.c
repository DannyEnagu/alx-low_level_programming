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
	int prd;

	if (argc > 1)
	{
		prd = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prd);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
