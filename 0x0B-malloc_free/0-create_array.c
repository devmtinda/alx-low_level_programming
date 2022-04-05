#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array of characters
 * @size: size of allocated memory
 * @c: character
 * Return: p
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size);

	if (p == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
