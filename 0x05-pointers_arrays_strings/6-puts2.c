/**
 * puts2 - prints all characters of a string
 *
 * @str: string passed in
 *
 * Return: Noting
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
