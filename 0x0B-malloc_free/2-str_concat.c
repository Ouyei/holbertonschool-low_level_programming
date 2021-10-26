#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	len1 = len2 = 0;
	while (s1[len2] != '\0')
	{
		str[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		str[len1] = s2[len2];
		len1++, len2++;
	}
	str[len1] = '\0';
	return (str);
}
