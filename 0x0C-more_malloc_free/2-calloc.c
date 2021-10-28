#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocat memory for an array init to zero.
 * @nmemb: Number of elements.
 * @size: Byte size of each element.
 * Return: Void pointer to array space.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}
