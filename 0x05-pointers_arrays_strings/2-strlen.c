#include "main.h"
/**
 * _strlen - entry point
 * @s: pointer to string
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; ; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	return (i);
}
