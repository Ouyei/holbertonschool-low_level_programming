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
	int len1 = 0, len2 = 0;
	char *conc;

	while (s1 && *s1++)
		len1++;
	while (s2 && *s2++)
		len2++;
	conc = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!conc)
		return (NULL);
	conc += len1 + len2;
	*conc = '\0'; /**Invalid pointer correction**/
	for (s2--; len2--;)
		*--conc = *--s2;
	for (s1--; len1--;)
		*conc = *--s1;
	return (conc);
}
