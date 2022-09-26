/**
 * _memset - function fills the first n bytes
 *	of the memory area pointed to by s with
 *	the constant byte b
 * @s: pointer to a memory area to fill
 * @b: value to fill memory area with
 * @n: size of the memory to fill
 *
 * Return: pointer to memeory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}

