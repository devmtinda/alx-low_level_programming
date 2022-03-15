#include "main.h"

/**
 * print_last_digit - entry point
 * @a : number to check
 * Return:0 or 1 or -1
 *
 */
int print_last_digit(int a)
{
	int res;

	if (a < 0)
	{
		res = -1 * (a % 10);
	}

	else
	{
		res = a % 10;
	}

	_putchar(res + '0');

	return (res);
}
