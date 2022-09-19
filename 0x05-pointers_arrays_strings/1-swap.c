/**
 * swap_int - swaps the values of two integers
 *
 * @a: 1st int value
 * @b: 2nf int value
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
