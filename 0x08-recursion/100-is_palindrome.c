#include "main.c"

/**
 * _strlen - Determines length of string.
 * @s: String 2 check.
 * Return: Integer length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * are_u_palind - Checks if 2 chars of a string are equal.
 * @s: String 2 be checked.
 * @i: First index.
 * @j: Last index.
 * Return: 1 if equal otherwise 0.
 */
int are_u_palind(char *s, int i; int j)
{
	if (j >= i / 2)
		return (1);

