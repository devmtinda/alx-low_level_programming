#include "main.h"
/**
 * print_number - entry point
 * @n: integer
 * Return: void
 */
void print_number(int n)
{
	int num, i, j, det = 0;

	if (n < 0)
	{
		det = 1;
		n = n * -1;
	}
	num = n;

	for (i = 1; ; i *= 10)
	{
		num /= 10;
		if (num <= 0)
		{
			break;
		}
	}
	if (det == 1)
	{
		_putchar('-');
	}

	for (j = i; j >= 1; j /= 10)
	{
		num = n;
		num /= j;
		_putchar(num + '0');

		if (j == 1)
		{
			break;
		}
		n = n - (num * j);
	}
}
