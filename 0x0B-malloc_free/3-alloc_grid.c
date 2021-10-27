#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2 dimensional array.
 * @width: The table width.
 * @height: The table height.
 * Return: Pointer to the table.
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height); /*malloc*/

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		ptr[i][j] = 0;
	return (ptr);
}
