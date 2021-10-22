#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiply 2 numbers.
 * @argc: Argument count.
 * @argv: Array of pointers to argument strings.
 *
 * Return: result of multiplication or 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
