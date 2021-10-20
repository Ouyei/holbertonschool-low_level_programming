#include "main.h"

/**
 * _strlen_recursion - Returns length of string.
 * @s: String to measure or pointer 2 string.
 * Return: String integer lenght.
 *
 */
int _strlen_recursion(char *s)
{

	/*Base condition*/
	if (*s)
		return (_strlen_recursion(s + 1) + 1);
	return (0);
}
