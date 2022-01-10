#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
  * @head: The head of the doubly linked list.
  * @n: The number to place in the new node
  * Return: The new head of the doubly linked list.
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = *(head);

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	*(head) = new;
	new->n = n;
	new->prev = NULL;

	if (aux == NULL)
		new->next = NULL;
	else
	{
		new->next = aux;
		aux->prev = *(head);
		aux = NULL;
	}

	return (new);
}
