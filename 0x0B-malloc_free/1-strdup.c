#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *p;
	int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;

	p = malloc(len + 1);

	if (p == NULL)
		return (NULL);

	i = 0;

	while (i < len)
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
