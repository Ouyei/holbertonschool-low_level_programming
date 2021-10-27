#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free an a previously allocated grid.
 * @grid: Pointer to grid.
 * @height: The grid height
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
