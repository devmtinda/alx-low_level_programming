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
	int i, j;

	for (i = 0; n <= 98 ; i++)
	{
		if (src[i] == '\0' && n > i)
		{
			j = i;
			while (j <= n)
			{
				dest[j] = '\0';
				j++;
			}
			i = j;
			break;

		}
		else if (i == n)
		{
			break;
		}
		dest[i] = src[i];
	}
	return (dest);
}
