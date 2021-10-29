#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a block of memory.
 * @ptr: The pointer with allocated size in memory.
 * @old_size: Byte size of previous block.
 * @new_size: Byte size of new block.
 * Return: Pointer to newly allocated memory or null.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str, *p;
	unsigned int i = 0;

	if (new_size == old_size)
	return (ptr);
	if (!ptr)
	{
		str = malloc(new_size);
		if (!str)
			return (NULL);
		return (str);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (!str)
		return (NULL);
	p = ptr;

	while (i < old_size)
	{
		str[i] = p[i];
		i++;
	}

	free(ptr);
	return (str);
}
