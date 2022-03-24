#include "main.h"
/**
 * _strcmp - entry point
 * @s1: first string
 * @s2: second string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int len, cmp, i;

	for (len = 0; s1[len] != '\0'; len++)
		;

	for (i = 0; i <= len; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				cmp = 15;
			else if (s1[i] < s2[i])
				cmp = -15;
			break;
		}
		else if (i == len)
		{
			cmp = 0;

		}
	}
	return (cmp);
}
