#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(9);

	return (p);
}
