#include "main.h"
/**
 * rev_string - entry point
 * @s: passed string
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, half, j;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	half = len / 2;
	i = 0;

	for (j = len - 1; j >= half; j--)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i++;
	}
}
