#include "main.h"
/**
 * _puts - entry point
 * @str: passed string
 * Return: void
 */
void _puts(char *str)
{
	int i, len;

	for (i = 0; ; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
	}
	len = i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
