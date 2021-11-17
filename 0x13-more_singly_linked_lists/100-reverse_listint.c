#include "lists.h"

/**
 * reverse_listint - Reverses a linked list using 1 loop.
 * @head: Pointer 2 the head of the list.
 * Return: Head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux , *tmp;

	aux = *head;
	tmp = NULL;

	while (*head)
	{
		(*head) = (*head)->next;
		aux->next = tmp;
		tmp = aux;
		aux = *head;
	}
	(*head) = tmp;
	return (*head);
}
