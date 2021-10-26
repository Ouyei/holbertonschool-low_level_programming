#include "main.h"
#include <stdio.h>

/**
 * create_array - Creates an arrya of char and initializes it whit a char.
 * @size: Size of the array
 * @c: char to be initialized with or the default byte filling.
 * Return: Pointer to array or null.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	str = malloc(size * sizeof(c));

	if (str == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < size) /*While for array*/
	{
		*(str + i) = c;
		i++;
	}
	return (str);
}
