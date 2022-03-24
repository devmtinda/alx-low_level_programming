#include "main.h"
/**
 * to_upper - function
 * cap_string - entry point
 * @str: string
 * @i: integer
 * Return: char
 */
void to_upper(char *str, int i)

{
	char upper, lower;

	if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
	{
		upper = 'A';
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (str[i + 1] == lower)
			{
				str[i + 1] = upper;
				i++;
				break;
			}
			upper++;
		}
	}
}
/**
 * cap_string - entry point
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	int len, i, j;
	char sep[] = ",\t;\n; .!?\"(){}";

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				to_upper(str, i);

			}
		}
	}
	return (str);
}
