#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Count the elements of a list_t list.
 * @h: Pointer to list.
 * Return: number of elments
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements)
}
