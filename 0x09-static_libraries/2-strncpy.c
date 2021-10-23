#include "main.h"

/**
 * _strncpy - copies a string from source to destination
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy, at most
 *
 * Return: Point 2 dest buffer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
