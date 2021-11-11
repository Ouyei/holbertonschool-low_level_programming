#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: New string to add in the node.
 * Return: Address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_l;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_l = malloc(sizeof(list_t));
	if (!new_l)
		return (NULL);
	new_l->str = strdup(str);/**the source string to be duplicated and returns the pointer to a newly copied string**/
	new_l->len = length;
	new_l->next = (*head);
	(*head) = new_l;

	return (*head);
}
