#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int len, i;
	char *name = argv[0];

	for (len = 0; name[len] != '\0'; len++)
		;

	if (argc > 0)
	{
		i = 0;
		while (i < len)
		{
			_putchar(name[i]);
			i++;
		}
		_putchar('\n');
	}
	return (0);
}
