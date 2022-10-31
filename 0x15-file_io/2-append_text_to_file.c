#include "main.h"

/**
 * append_text_to_file - append text to file only if the file exist
 * @filename: name of file
 * @text_content: text content to append to file
 *
 * Return: 1 0n success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		count = 0;
		while (text_content[count] != '\0')
			count++;

		status = write(fd, text_content, count);
		if (status < 0)
			return (-1);
	}

	close(fd);
	return (1);

}
