#include "main.h"
/**
 * _strchr - entry point
 * @s: char pointer
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;
	char *f = s;

	for (i = 0; ; i++)
	{
		if (s[i] == c)
		{
			f += i;
			break;
		}
		else if (s[i] == '\0')
		{
			f = '\0';
			break;
		}
	}
	return (f);
}
