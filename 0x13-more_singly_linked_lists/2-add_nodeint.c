#include "lists.h"
/**
 * add_nodeint - Add node at list.
 * Return: Address of new element of NULL if fail.
 * @head: First node in list
 * @n: Data to add
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;
	/*Using malloc*/
	add_node = malloc(sizeof(listint_t));

	if (!add_node || !head)
		return (NULL);

	add_node->n = n; /*Assing data*/
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
