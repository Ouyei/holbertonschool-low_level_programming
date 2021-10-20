#include "main.h"

/**
 * _puts_recursion - Prints a string followed by new line recursively.
 * @s: String to print or pointer to string.
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	/*Base condition*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s); /*print s*/
	_puts_recursion(s + 1); /*Recursion call*/
}
