#include "main.h"

/**
 * _strchr - Locate char in the string.
 * @s: Pointer to string.
 * @c: Char to locate.
 * Return: Pointer to the first occurrence of the char c in strin s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	retunr (!c ? s : NULL);
}
