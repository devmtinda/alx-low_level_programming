#include "main.h"
/**
 * print_square - entry point
 * @size: print integer
 * Return:void
 */
void print_square(int size)
{
	int i = 1;

	while (i <= size)
	{
		int k = 0;
		while (k < size)
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
