#include "main.h"
/**
 * _strncat - entry point
 * @dest: first character
 * @src: second character
 * @n: integer
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i, j = 0;

	for (len = 0; dest[len] != '\0'; len++)
		;

	for (i = len; ; i++)
	{
		dest[i] = src[j];

		if (src[j] == src[n - 1])
		{
			break;
		}
		else if (src[j] == '\0')
		{
			break;
		}
		j++;

	}
	return (dest);
}
