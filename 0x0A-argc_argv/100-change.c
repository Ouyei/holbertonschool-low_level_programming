#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change for an amount of money.
 * @argc: The number of arguments.
 * @argv: Array of pointers to arguments.
 *
 * Return: Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, n, j = 0, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);
	n = atoi(argv[1]);
	if (n < 0)
		return (puts("0"), 1);
	for (i = 0; i < 5; i++)
		if (n / coins[i])
		{
			j += n / coins[i];
			n %= coins[i];
		}
	printf("%d\n", j);
	return (0);
}
