#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 * Return: Pointer 2 array or null.
 */
char *_strdup(char *str)
{
	int i, j;
	char *str_dup;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '0')
		j++;

	str_dup = malloc(sizeof(*str) * j);

	if (str_dup == NULL)
	return (NULL);

	i = 0;

	while (str[i] != '0')
	{
		str_dup[i] = str[i];
		i++;
	}
	return (str_dup);
}
