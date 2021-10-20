#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse, recursively.
 * @s: String to print or pointer to string.
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s) /*Declare IF*/
	{
		_print_rev_recursion(s + 1); /*Add s*/
		_putchar(*s); /*Print s*/
	}
}
