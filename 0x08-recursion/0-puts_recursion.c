#include "main.h"
/**
 * _puts_recursion - entry point
 * @s: pointer char
 * Return: void
 */
void _puts_recursion(char *s)
{
	char *p;

	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		p = &s[1];
		_puts_recursion(p);
	}
}
