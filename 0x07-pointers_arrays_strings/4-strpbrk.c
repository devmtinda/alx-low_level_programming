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

	for (i = 0; ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = s + i;
				break;
			}
		}
		if (s[i] == accept[j])
		{
			break;
		}
		else if (s[i] == '\0')
		{
			s = '\0';
			break;
		}
	}
	return (s);
}
