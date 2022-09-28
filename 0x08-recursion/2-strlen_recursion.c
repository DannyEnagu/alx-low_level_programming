/**
 * _strlen_recursion - function calculate and prints
 *			the lenght of a string
 * @s: string input
 *
 * Return: integer for the length of s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
