#include "holberton.h"
/**
 * print_rev - prints a string rev
 * @s: A pointer to an int that will be updated
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (--i >= 0)
		_putchar(s[i]);
	_putchar('\n');
}
