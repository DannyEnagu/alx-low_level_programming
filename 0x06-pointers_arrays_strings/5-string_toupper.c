/**
 * string_toupper - A function that changes all lowercase
 *		letters of a string to uppercase
 *
 * @s: string
 *
 * Return: Updated string
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
	}

	return (s);
}
