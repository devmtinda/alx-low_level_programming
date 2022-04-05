#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *p;

	if (s1 == NULL)
		*s1 = '\0';

	if (s2 == NULL)
		*s2 = '\0';

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	p = malloc(len1 + len2 + 1);

	if (p == NULL)
		return (NULL);

	i = 0;

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;

	while (j <= len2)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);
}
