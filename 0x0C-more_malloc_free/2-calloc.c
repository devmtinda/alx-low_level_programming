#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int mem, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = nmemb * size;
	p = malloc(mem);

	if (p == NULL)
		return (NULL);


	i = 0;
	while (i < mem)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
