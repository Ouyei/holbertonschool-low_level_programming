#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - Concatenates all arguements 2 the program.
 * @ac: Argument 2 count.
 * @av: Point 2 arguements.
 * Return: Pointer 2 new space in memory or null.
 **/
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, m = 0;

	if (ac == 0 || av == 0)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
