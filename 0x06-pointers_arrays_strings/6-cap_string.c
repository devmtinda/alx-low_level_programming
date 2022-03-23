#include "main.h"
/**
 * cap_string - entry point
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	int len, i;
	char upper, lower;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '.'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				upper = 'A';

				for (lower = 'a'; lower <= 'z'; lower++)
				{
					if (str[i + 1] == lower)
					{
						str[i + 1] = upper;
						break;
					}
					upper++;
				}
			}
		}
	}
	return (str);
}
