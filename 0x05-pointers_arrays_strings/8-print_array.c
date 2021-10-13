#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: A pointer to an int that will be updated
 * @n: return value n
 * Return: void
 */
void print_array(int *a, int n)
{
	int z;

	for (z = 0 ; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
