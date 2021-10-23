#include "main.h"

/**
 * _strstr - Searche string for a substring.
 * @haystack: String 2 search.
 * @needle: Substring 2 find.
 * Return: Pointer to first match substring or NULL.
 */

char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
