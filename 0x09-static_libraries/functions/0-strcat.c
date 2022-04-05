#include "main.h"
/**
 * _strcat - entry point
 * @dest: first character
 * @src: seconds character
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len, i, j = 0;

	for (len = 0; dest[len] != '\0'; len++)
		;
	for (i = len; ; i++)
	{
		dest[i] = src[j];

		if (src[j] == '\0')
		{
			break;
		}
		j++;
	}
	return (dest);
}
