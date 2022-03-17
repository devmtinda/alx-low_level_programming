#include "main.h"
/**
 * print_triangle - entry point
 * @size: print integer
 * Return:void
 */
void print_triangle(int size)
{
	int i = 1;
	int j;
	int k;

	while (i <= size)
	{
		j = i;

		while (j < size)
		{
			_putchar(' ');
			j++;
		}
		k = 0;

		while (k < i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
