#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and print it to the POSIX
 * standard output.
 *
 * @filename: name of file to be read and printed
 * @letters: number of letters it should read and print
 *
 * Return: If the function fails or filename is NULL - 0
 * o/w - the actual number of bytes the function can read
 * and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, wrt, rd;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(*buf) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (fd == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (wrt);
}
