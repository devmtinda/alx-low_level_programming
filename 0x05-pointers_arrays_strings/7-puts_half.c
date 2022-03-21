#include "main.h"
/**
 * puts_half - entry point
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int len, n, i, j;

	for (len = 0; str[len] != '\0'; len++)
		;

	if (len % 2)
	{
		n = (len - 1) / 2;
		j = len - 1;

		for (i = 1; i < n; i++)
		{
			j -= 1;
		}

		while (j < len)
		{
			_putchar(str[j]);
			j++;
		}
	}

	else
	{
		n = len / 2;

		while (n < len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
