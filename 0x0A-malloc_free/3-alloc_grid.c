#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid  - Function returns pointer to a 2 dimensional array
 *
 * @width: Columns of the array
 * @height: Rows of the array
 * Return: pointer represented by s or NULL
 */

int **alloc_grid(int width, int height)

{
	int **alloc_grid;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	alloc_grid = malloc(height * sizeof(int *));
	if (alloc_grid == 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		alloc_grid[i] = malloc(width * sizeof(int));
		if (alloc_grid[i] == 0)
		{
			for (j = 0; j < i; j++)
				free(alloc_grid[j]);
			free(alloc_grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			alloc_grid[i][j] = 0;
	}
	return (alloc_grid);
}
