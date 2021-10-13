#include "holberton.h"

/**
 * puts_half - prints half the string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, l;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	l = (i + 1) / 2;

	for (i = l; str[i]; i++)
	{
		_putchar (str[i]);
	}
	_putchar ('\n');
}
