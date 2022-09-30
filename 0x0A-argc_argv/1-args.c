#include "main.h"

/**
 * main - print the number of argument passed
 *	to the programe
 * @argc: argument count
 * @argv: pointer to artgument vector unused
 *
 * Return: always(0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
