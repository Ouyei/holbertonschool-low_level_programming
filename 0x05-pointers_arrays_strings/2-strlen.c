#include "main.h"

/**
 * _strlen - length of a string
 * @s: A pointer to an int that will be updated
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}
