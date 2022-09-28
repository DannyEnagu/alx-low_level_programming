/**
 * _pow_recursion - function that calculate the
 *		power of a non zero or
 *		number greater than zero(0).
 * @x: base input
 * @y: exponent input
 *
 * Return: power of x raised to y on success,
 *	1 if y is equal to 0 and
 *	-1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
