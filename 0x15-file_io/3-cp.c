#include "main.h"
/**
 * cp_file - copies from file1 to file2
 * @file1: first file
 * @file2: second file
 * Return: void
 */
void cp_file(char *file1, char *file2)
{
	int fd1, fd2, p, q;
	char *buf;
	ssize_t m, n;

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_WRONLY | O_TRUNC | O_CREAT, 00664);
	if (fd2 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	buf = malloc(sizeof(char) * 1024);
	m = read(fd1, buf, 1024);
	buf[m] = '\0';
	if (m == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	n = write(fd2, buf, m);
	if (n == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	p = close(fd1);
	q = close(fd2);
	if (p == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d", fd1);
	}
	else if (q == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d", fd2);
	}
	free(buf);
}
/**
 * main - entry point
 * @ac: argument count
 * @av: pointer to the arguments
 * Return: Always 0
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(1, "Usage: %s file_from file_to", av[0]);
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}
