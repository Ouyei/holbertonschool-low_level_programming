#include "main.h"

/** _strchr - Find char in string.
 * @s: Point 2 string.
 * @c: Char to find.
 * Return: Point to first occurence of c in s.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}

/**
 * _strpbrk - Search a string 4 any of a set of bytes.
 * @s: point 2 string.
 * @accept: Set of byte 2 find.
 * Return: Point 2 first match byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (0);
}
