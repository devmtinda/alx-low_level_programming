#include "main.h"
/**
 * print_rev - entry point
 * @s: passed string
 * Return: void
 */
void print_rev(char *s)
{
	int i, len;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	len = i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
