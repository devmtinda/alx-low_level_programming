#include "main.h"
/**
 * main -entry point
 * @argc: argument counter
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int c = 0, len, i;
	char *p = argv[0];

	while (c < argc)
	{
		for (len = 0; p[len] != '\0'; len++)
			;

		i = 0;

		while (p[i] != '\0')
		{
			_putchar(p[i]);
			i++;
		}
		c++;
		_putchar('\n');
		p += (len + 1);
	}
	return (0);
}
