/**
 * more_numbers - print 0 - 14 10 times
 *		can only useing _putchar
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int val, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;
			if (j > 9)
			{
				_putchar(1 + 48);
				n = j % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}
