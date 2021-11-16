#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list.
  * @head: The head of the linked list.
  * @n: The value to add to the end of the linked list.
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	 listint_t *add_node, *buffer = *head;
	/*Using malloc*/
	add_node = malloc(sizeof(listint_t));

	if (!add_node)
	return (NULL);

	add_node->n = n; /*Assing data*/
	add_node->next = NULL;

	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
}
	while (buffer->next)
		buffer = buffer->next;
	buffer->next = add_node;
	return (add_node);
}
