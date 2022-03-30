#include "main.h"
/**
 * string_length - entry point
 * @q: string
 * @len: int
 * Return: 0
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
 * _strlen_recursion - recursive fxn
 * @s:string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0, i;

	i = string_length(s, len);
	return (i);
}
