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

	for (i = len; src[j] != '\0'; i++)
	{
		dest[i] = src[j];

		if (src[j] == src[n - 1])
		{
			break;
		}
		j++;

	}
	dest[i + 1] = '\0';
	return (dest);
}
