#include "main.h"
/**
 * string_toupper - converts strings to uppercase
 * @str: string 2 convert
 *
 * Return: char pointer
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
