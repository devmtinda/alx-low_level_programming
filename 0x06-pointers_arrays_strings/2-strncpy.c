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

	for (i = 0; n <= 98 ; i++)
	{
		dest[i] = src[i];
		if (i == n - 1)
		{
			break;
		}
	}
	return (dest);
}
