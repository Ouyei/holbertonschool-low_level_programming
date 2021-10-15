#include "main.h"
/**
 * string_toupper - converts strings to uppercase
 * @s: string 2 convert
 *
 * Return: char pointer
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
