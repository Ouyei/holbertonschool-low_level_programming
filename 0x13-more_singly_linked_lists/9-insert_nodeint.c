#include "lists.h"

/**
* insert_nodeint_at_index - Inserts new node.
* @head: Pointer to head.
* @index: Node to insert.
* @n: Data of the new node.
* Return: Address of the new node otherwise NULL.
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *iter, *new;

	iter = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = iter;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		iter = iter->next;
		index--;
		if (!iter)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = iter->next;
	iter->next = new;
	return (new);
}
