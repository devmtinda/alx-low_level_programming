#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int mem, i, j;

	if (min > max)
		return (NULL);

	mem = max - min + 1;
	p = malloc(sizeof(*p) * mem);

	if (p == NULL)
		return (NULL);

	i = min;
	j = 0;
	while (i <= max)
	{
		p[j] = i;
		i++;
		j++;
	}
	return (p);
}
