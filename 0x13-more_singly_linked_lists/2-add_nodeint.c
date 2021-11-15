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
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n; /*Assing data*/
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
