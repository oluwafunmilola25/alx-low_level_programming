#include "main.h"

/**
 * read_textfile - reads a text fileand prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: the number of letters to be read and print
 * Return: actual number of letters read and printed and 0 when failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int len1, len2;
	char *get;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	get = malloc(sizeof(char) * letters);
	if (!get)
		return (0);
	len1 = read(fd, get, letters);
	if  (len1 < 0)
	{
		free(get);
		return (0);
	}
	get[len1] = '\0';

	close(fd);

	len2 = write(STDOUT_FILENO, get, len1);
	if (len2 < 0)
	{
		free(get);
		return (0);
	}
	free(get);
	return (len2);
}
