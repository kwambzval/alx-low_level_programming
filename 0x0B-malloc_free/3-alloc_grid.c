#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: the width of the grid
 * @height: the height of the grid
 *
 * Return: pointer to the allocated 2D array, NULL on failure or invalid
 * parameters
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(grid[j]);

			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

