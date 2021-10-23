#include "main.h"

/**
 * _strchr - Locate char in the string.
 * @s: Pointer to string.
 * @c: Char to locate.
 * Return: Pointer to the first occurrence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}
