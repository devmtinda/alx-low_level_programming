#include "main.h"
/**
 * _strspn - entry point
 * @s: char one
 * @accept: char two
 * Return: char
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i] != ',' && s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n += 1;
				break;
			}
		}
	}
	return (n);
}
