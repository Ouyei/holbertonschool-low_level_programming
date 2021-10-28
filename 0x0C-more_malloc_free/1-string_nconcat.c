#include "main.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: String for length to check.
 * Return: Integer length of string.
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - Concatenates 2 strings.
 * @s1: String.
 * @s2: String.
 * @n: Number of bytes.
 * Return: Void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *j, *k;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n < len2)
		len2 = n;
	j = k = malloc(len1 + len2 + 1);
	if (!j)
		return (NULL);
	while (*s1)
		*j++ = *s1++;
	while (len2--)
		*j++ = *s2++;
	*j = '\0';
	return (k);
}
