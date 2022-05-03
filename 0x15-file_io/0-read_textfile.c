#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: constant string
 * @letters: number of letters it should read
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buf[1024];
	ssize_t max;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	max = read(fd, buf, letters);
	dprintf(STDOUT_FILENO, "%s", buf);

	close(fd);
	return (max);

}
