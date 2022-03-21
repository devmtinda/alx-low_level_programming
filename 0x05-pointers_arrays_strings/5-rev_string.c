#include "main.h"
/**
 * rev_string - entry point
 * @s: passed string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, j;
	char k[len];

	for (len = 0; s[len] != '\0'; len++)
		;
	j = 0;

	for (i = len - 1; i >= 0; i--)
	{
		k[j] = s[i];
		j++;
	}
	s = k;
}
