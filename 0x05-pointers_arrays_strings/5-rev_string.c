#include "main.h"
/**
 * rev_string - entry point
 * @s: passed string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, j;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	len = i;
	j = 0;
	char k[len];

	for (i = len - 1; i >= 0; i--)
	{
		k[j] = s[i];
		j++;
	}
	s = k;
}
