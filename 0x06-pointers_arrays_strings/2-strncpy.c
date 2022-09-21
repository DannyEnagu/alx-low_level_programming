/**
 * _strncpy - A program that copys a string into another
 *		string starting from n
 *
 * @dest: destination string
 * @src: source string being copied
 * @n: source string nth element
 *
 * Return: dest (dest + src from 0 - nth)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
