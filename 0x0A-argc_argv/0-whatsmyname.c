#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program.
 * @argc: Count arguments
 * @argv: Array of pointers 2 argument strings.
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
