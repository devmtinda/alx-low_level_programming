#include <stdlib.h>
/**
 * free_grid - frees 2D array
 * @grid: array
 * @height: integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
