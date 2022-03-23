#include "main.h"
/**
 * cap_string - entry point
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	int len, i, j;
	char upper, lower;
	char sep[] = ",\t;\n; .!?\"(){}";

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
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
	}
	return (str);
}
