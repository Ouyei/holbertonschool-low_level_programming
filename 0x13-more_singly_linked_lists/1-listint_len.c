#include "lists.h"

/**
 * listint_len - print the number of elements
 * @h: linked list to print
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0; /**count**/

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
