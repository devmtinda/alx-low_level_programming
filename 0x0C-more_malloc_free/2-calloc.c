#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: integer
 * @size: integer
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(nmemb * size);

	return (p);
}
