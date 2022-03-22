#include "main.h"
/**
 * _atoi - entry point
 * @s: pointer string
 * Return: int
 */
int _atoi(char *s)
{
	int len, i, new, mult = 1, fact = 1, res = 0;

	for (len = 0; s[len] != '\0'; len++)
		;

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			mult = -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			fact *= 10;
			res = res * fact / 10;
			new = s[i] - 48;
			res += new;
		}
		res *= mult;
	}
	return (res);

}
