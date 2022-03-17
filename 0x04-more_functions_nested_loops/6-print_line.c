#include "main.h"
/**
 * print_line - entry point
 * @n: print integer
 * Return:void
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
