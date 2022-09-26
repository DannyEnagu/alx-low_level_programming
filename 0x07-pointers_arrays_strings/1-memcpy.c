/**
 * _memcpy - function copys source memory area to a
 *	destination memory area
 * @dest: a pointer to the destination meory area
 * @src: the source memory being copied
 * @n: number of bytes to copy from src to dest
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];

	return (dest);
}
