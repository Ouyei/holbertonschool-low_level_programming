#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - The sum of the 2 diagonals of a square matrix of integers.
 * @a: Second array of chars.
 * @size: The size*size of square matrix.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + size * i + i);
		sum2 += *(a + size * (i + 1) - i - 1);
	}
	printf("%d, %d\n", sum1, sum2);
}
