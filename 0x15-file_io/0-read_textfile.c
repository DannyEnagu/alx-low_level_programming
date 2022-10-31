#include "main.h"

/**
 * read_textfile - reads in a text file and prints it content
 *      to standard output
 * @filename: text file input
 * @letters: amount of letters to read and print
 *
 * Return: number of letters read and print or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	size_t i, j = 0, sz;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	str = malloc(sizeof(char) * letters);

	if(str == NULL)
		return (0);

	sz = read(fd, str, letters);
	if (sz < j)
		return (0);
	str[sz] = '\0';

	i = write(STDOUT_FILENO, str, sz);

	if (i < j || i < sz)
		return (0);

	free(str);

	close(fd);

	return (i);
}
