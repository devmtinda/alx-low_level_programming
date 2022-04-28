#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	if (n == 0)
		i = 0;
	else if (n == 1)
		i = 1;

	else
	{
		i = n - 2 * (n >> 1);
		n = n >> 1;
		print_binary(n);
	}
	_putchar(i + '0');
}
