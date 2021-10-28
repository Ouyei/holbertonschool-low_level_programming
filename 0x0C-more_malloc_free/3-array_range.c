#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers.
 * @min: Smallest integer.
 * @max: Largest integer.
 * Return: int pointer to array.
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (!p)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}

	return (p);
}
