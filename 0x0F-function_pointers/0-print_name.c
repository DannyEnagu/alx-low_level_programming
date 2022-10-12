#include "function_pointers.h"

/**
 * print_name - prints name using
 *		pointer to function
 * @name: name to print
 * @f: pinter to function
 *
 * Retrun: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
