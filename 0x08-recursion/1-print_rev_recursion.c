#include "main.h"
/**
 * rev_recursion - entry point
 * @s: string pointer
 * @len: integer
 * Return: void
 */
void rev_recursion(char *s, int len)
{
	if (s[len] == '\n')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[len]);
		len -= 1;
		rev_recursion(s, len);
	}
}
/**
 * _print_rev_recursion - entry point
 * @s: pointer char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	len -= 1;

	rev_recursion(s, len);
}
