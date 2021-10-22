#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguenments passed to it.
 * @argc: The number of arguments.
 * @argv: Array of pointer to arguement strings.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */

	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
