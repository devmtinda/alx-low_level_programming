#include "main.h"
/**
 * is_palindrome - entry point
 * @s: string
 * Return: int
 */
int is_palindrome(char *s)
{
	int i, len, j;
	char *p = s;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;
	j = 0;

	for (i = len - 1; i >= len / 2; i--)
	{
		temp = p[i];
		p[i] = p[j];
		p[j] = temp;
		j++;
	}

	if (s == p)
		return (1);
	else
		return (0);
}
