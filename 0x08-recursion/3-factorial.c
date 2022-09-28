/**
 * factorial - function that calculate the
 *		factorial of a non zero or
 *		number greater than one(1).
 * @n: integer input
 *
 * Return: factorial of n on success,
 *	1 if n is equal to 1 and
 *	-1 if n is less than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
