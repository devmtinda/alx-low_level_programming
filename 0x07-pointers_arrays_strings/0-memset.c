#include "main.h"
/**
 * _memset - entry point
 * @s: pointer
 * @b: character
 * @n: integer
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
