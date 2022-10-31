#include "main.h"

/**
 * create_file - creates a new file with read and write
 *	permissions
 * @filename: text file input
 * @text_content: text content of file
 *
 * Return: 1 on success and -1 on failiur
 */

int create_file(const char *filename, char *text_content)
{
	int fd, status, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;

		status = write(fd, text_content, len);
		if (status < 0)
			return (-1);
	}

	close(fd);
	return (1);
}
