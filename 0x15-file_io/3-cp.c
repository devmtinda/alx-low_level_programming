#include "main.h"
/**
 * print_error2 - prints error
 * @file2: second file
 * Return: void
 */
void print_error2(char *file2)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
	exit(99);
}
/**
 * print_error1 - prints error
 * @file1: first file
 * Return: void
 */
void print_error1(char *file1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
	exit(98);
}
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
		print_error1(file1);
	fd2 = open(file2, O_WRONLY | O_TRUNC | O_CREAT, 00664);
	if (fd2 == -1)
		print_error2(file2);
	buf = malloc(sizeof(char) * 10240);
	m = read(fd1, buf, 10240);
	buf[m] = '\0';
	if (m == -1)
		print_error1(file1);
	n = write(fd2, buf, m);
	if (n == -1)
		print_error2(file2);
	p = close(fd1);
	q = close(fd2);
	if (p == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd1);
		exit(100);
	}
	else if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd2);
		exit(100);
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
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(av[1], av[2]);
	return (0);
}
