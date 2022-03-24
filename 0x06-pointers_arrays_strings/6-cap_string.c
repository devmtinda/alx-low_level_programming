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
/**
 * cap_string - entry point
 * @str: string
 * Return: char
 */
char *cap_string(char *str)
{
	int i, j;
	char sep[] = ",\t;\n; .!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (str[i] == sep[j])
			{
				to_upper(str, i);
				break;
			}
			j++;
		}
	}
	return (str);
}
