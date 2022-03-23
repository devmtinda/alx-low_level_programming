#include "main.h"
/**
 * leet - entry point
 * @c: string
 * Return: char
 */
char *leet(char *c)
{
	int i, j;
	char list[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; list[j] != '\0'; j++)
		{
			if (c[i] == list[j])
			{
				c[i] = num[j];
				break;
			}
		}
	}
	return (c);
}
