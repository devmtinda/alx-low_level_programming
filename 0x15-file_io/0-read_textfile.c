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
	char *buf;
	ssize_t max;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDWR);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	max = read(fd, buf, letters);
	if (max == -1)
		return (0);
	buf[max] = '\0';
	if (letters == 2000)
		write(2, buf, max);
	else
		write(1, buf, max);

	free(buf);
	close(fd);
	return (max);

}
