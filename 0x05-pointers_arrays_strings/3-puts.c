#include "holberton.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that will be updated
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
