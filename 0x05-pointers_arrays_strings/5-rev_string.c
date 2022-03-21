#include "main.h"
/**
 * rev_string - entry point
 * @s: passed string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, j, half;

	for (len = 0; s[len] != '\0'; len++)
		;

	half = len / 2;
	j = 0;

	for (i = len - 1; i >= half; i--)
	{
		s[j] = s[i];
		j++;
	}
}
