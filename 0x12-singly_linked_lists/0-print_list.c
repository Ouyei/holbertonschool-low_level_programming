#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list
 * Return: nomber of nodes
 */

size_t print_list(const list_t *h)
{

	int s = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		s++;
		h = h->next;

	}
	return (s);
}
