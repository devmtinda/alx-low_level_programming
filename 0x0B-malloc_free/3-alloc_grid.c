#include <stdlib.h>
/**
 * alloc_grid - returns pointer
 * @width: integer
 * @height: integer
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(*p) * height);

	if (p == NULL)
		return (NULL);

	i = 0;

	while (i < height)
	{
		p[i] = malloc(sizeof(**p) * width);

		if (p[i] == NULL)
		{
			while (i--)
				free(p[i]);
			free(p);
			return (NULL);
		}
		j = 0;

		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
		i++;
	}
	return (p);
}
