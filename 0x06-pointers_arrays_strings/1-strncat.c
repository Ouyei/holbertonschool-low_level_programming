#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy, at most
 *
 * Return: Point to dest buffer
 */
char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /*WHILE count char */
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0') /*WHILE concatenate dest w/ src*/
	{
		dest[i] = src[j];
		i++; /*sum i*/
		j++; /*sum j*/
	}

	dest[i] = '\0'; /*Terminate null byte*/
	return (dest);
}
