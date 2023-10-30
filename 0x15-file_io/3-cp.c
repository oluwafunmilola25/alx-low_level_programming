#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int fd_write, fd_read, a, b, i;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fd_read, buf, BUFSIZ)) > 0)
	{
		if (fd_write < 0 || write(fd_write, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_read);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(fd_read);
	b = close(fd_write);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
