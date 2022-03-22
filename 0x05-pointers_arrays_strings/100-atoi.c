#include "main.h"
/**
 * _atoi - entry point
 * @s: pointer string
 * Return: int
 */
int _atoi(char *s)
{
	int len, i, new = 0;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			new += s[i];
			new -= 48;
		}
	}
	return (new);

}
