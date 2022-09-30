#include "main.h"

/**
 * main - print all arguments passed
 *	to the programe
 * @argc: argument count
 * @argv: pointer to artgument vector
 *
 * Return: always(0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
