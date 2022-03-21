#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 * @a: pointer int
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
