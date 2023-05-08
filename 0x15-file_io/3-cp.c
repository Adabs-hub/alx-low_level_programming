#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: argument array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd_r, fd_w, ch_count, closed_fd_r, closed_fd_w;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((ch_count = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || (write(fd_w, buf, ch_count) != ch_count))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (ch_count < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closed_fd_r = close(fd_r);
	closed_fd_w = close(fd_w);
	if (closed_fd_r < 0 || closed_fd_w < 0)
	{
		if (closed_fd_r < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (closed_fd_w < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
