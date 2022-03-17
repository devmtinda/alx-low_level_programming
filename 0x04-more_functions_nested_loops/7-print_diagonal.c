#include "main.h"
/**
 * print_diagonal - entry point
 * @n: print integer
 * Return:void
 */
void print_diagonal(int n)
{
	int i = 1;
	int j;

	while (i <= n)
	{
		j = n;
		_putchar('\\');

		while (j != i)
		{
			_putchar(' ');
			j--;
		}
		if (i != n)
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
