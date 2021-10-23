#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination buffer
 * @src: the source buffer
 *
 * Return: pointer the destination buffer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0') /*WHILE count character*/
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0') /*WHILE concatenate dest w/ src*/
	{
		dest[i] = src[j];
		i++; /*sum i*/
		j++; /*sum j*/
	}

	dest[i] = '\0'; /*Terminating null byte*/

	return (dest);
}
