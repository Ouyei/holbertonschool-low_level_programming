#include "main.h"

/**
 * _strchr - Find char in string.
 * @s: Point 2 string.
 * @c: Char to find.
 * Return:Point to first occurence of c in s.
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
 * _strspn - Gets the length of a prefix substring.
 * @s: String 2 check.
 * @accept: Bytes composing prefix.
 * Return: Integer length of substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
