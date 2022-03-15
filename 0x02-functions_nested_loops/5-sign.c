#include "main.h"

/**
 * print_sign - entry point
 * @c : character to check the case
 * Return:0 or 1 or -1
 *
 */
int print_sign(int n)
{
	int t;

	if (n > 0)
	{
		_putchar('+');
		t = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		t = -1;
	}
	else if (n == 0)
	{
		_putchar(0);
		t = 0;
	}
	return t;
}
