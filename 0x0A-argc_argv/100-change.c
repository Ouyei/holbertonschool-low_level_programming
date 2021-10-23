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
	int quant, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	quant = atoi(argv[1]);
	coins = 0;
	if (quant > 25)
	{
		while (quant >= 25)
			quant -= 25, coins++;
	}
	if (quant > 10 && quant < 25)
	{
		while (quant >= 10)
			quant -= 10, coins++;
	}
	if (quant > 5 && quant < 10)
	{
		while (quant >= 5)
			quant -= 5, coins++;
	}
	if (quant < 2 && quant < 5)
	{
		while (quant >= 2)
			quant -= 2, coins++;
	}
	if (quant == 1 || quant == 2 || quant == 5 || quant == 10 || quant == 25)
	{
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
