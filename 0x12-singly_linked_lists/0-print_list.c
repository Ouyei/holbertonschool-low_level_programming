#include <stdio.h>
#include "lists.h"

/** print_list - Prints all the elements of a list_t list.
 * @h: Pointer to lits
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (!h->str)
			printf ("[0] (nil\n");
		else
			printf("[%u] s%\n", h->len, h->str);
		h = h->next;
		size++;
	}

	return (size);
}
