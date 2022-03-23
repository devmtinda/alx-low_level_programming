#include "main.h"
/**
 * _strncpy - entry point
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; ; i++)
	{
		dest[i] = src[i];

		if (src[i] == src[n - 1])
		{
			break;
		}
		else if (src[i] == '\0')
		{
			break;
		}
	}
	return (dest);
}
