#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: text to be written
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int g;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
		g = write(fd, text_content, len);
		if (g != len)
			return (-1);
	}

	close(fd);

	return (1);
}
