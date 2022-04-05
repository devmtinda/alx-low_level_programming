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
		if (src[j] == src[n])
		{
			break;
		}
		dest[i] = src[j];
		j++;

	}
	dest[i] = '\0';
	return (dest);
}
