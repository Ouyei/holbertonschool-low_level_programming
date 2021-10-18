#include "main.h"

/**
 * _strchr - Locate char in the string.
 * @s: Pointer to string.
 * @c: Char to locate.
 * Return: Pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
