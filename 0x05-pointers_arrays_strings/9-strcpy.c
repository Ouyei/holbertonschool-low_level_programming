#include "holberton.h"

/**
 * _strcpy - copies a string
 * @dest: the destination
 *  @src: the source
 *
 *  Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	i = 0;
	while (src[i] != '\0')
	{
		 dest[i] = src[i];
		 i++;
	}
	dest[i] = '\0';

	return (dest);
}
