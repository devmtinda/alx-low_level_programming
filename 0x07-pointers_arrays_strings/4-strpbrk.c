#include "main.h"
/**
 * _strpbrk - entry point
 * @s: char pointer
 * @accept: char pointer
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *f = s;

	for (i = 0; ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f = s + i;
				break;
			}
		}
		if (s[i] == accept[j])
		{
			break;
		}
		else if (s[i] == '\0')
		{
			f = '\0';
			break;
		}
	}
	s = f;
	return (s);
}
