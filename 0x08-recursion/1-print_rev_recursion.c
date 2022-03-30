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
	else if (s[0] == '\0')
		;
	else
	{
		_putchar(s[len]);
		len -= 1;
		rev_recursion(s, len);
	}
}
/**
 * string_length - entry point
 * @q: pointer
 * @len: integer
 * Return: int
 */
int string_length(char *q, int len)
{
	char *p;

	if (q[0] == '\0')
	{
		return (len);
	}
	else
	{
		len += 1;
		p = &q[1];
		return (string_length(p, len));
	}
}
/**
 * _print_rev_recursion - entry point
 * @s: pointer char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = 0, i;

	i = string_length(s, len);
	i -= 1;
	rev_recursion(s, i);
}
