#include "lists.h"

/**
 * reverse_listint - Reverses a linked list using 1 loop.
 * @head: Pointer 2 the head of the list.
 * Return: Head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *aux = NULL;
	listint_t *tmp = NULL;

	if (!head || !*head)
		return (NULL);

	aux = *head;
	*head = NULL;

	while (aux)
	{
		tmp = aux->tmp;
		aux->tmp = *head;
		*head = aux;
		aux = tmp;
	}
	return (*head);
}
