#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *n = argv[0];
	int len;

	for (len = 0; n[len] != '\0'; len++)
		;

	_putchar((argc - 1) + '0');
	_putchar('\n');
	return (0);
}
