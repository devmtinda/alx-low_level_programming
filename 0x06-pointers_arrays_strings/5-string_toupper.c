#include "main.h"
/**
 * string_toupper - entry point
 * @str: string
 * Return: char
 */
char *string_toupper(char *str)
{
	int len, i;
	char upper, lower;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			upper = 'A';
			for (lower = 'a'; lower <= 'z'; lower++)
			{
				if (str[i] == lower)
				{
					str[i] = upper;
					break;
				}
				upper++;
			}
		}
	}
	return (str);
}
