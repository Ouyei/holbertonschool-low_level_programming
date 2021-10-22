#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives.
 * @argc: Count arguments.
 * @argv: array of pointers to arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
