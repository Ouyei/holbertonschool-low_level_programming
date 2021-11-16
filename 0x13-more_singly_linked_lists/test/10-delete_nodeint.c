#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at given index.
 * @head: Address of pointer 2 first node.
 * @index: Index of node to delete.
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*Declaring list and variables*/
	listint_t *new = *head, *temp;
	unsigned int i = 0;

	/*If there's nothing in the head*/
	if (*head == NULL)
		return (-1);

	if (index == 0) /*if index is unique position*/
	{
		*head = new->next;
		free(new);
		return (1);
	}

	while (new != NULL && i < (index - 1))
	{
		new = new->next; /*linked list*/
		i++;
	}

	/*Check positions current and next*/
	if (new == NULL || new->next == NULL)
		return (-1);

	/*Delete node at position (next of index -1)*/
	temp = new->next;
	new->next = temp->next;

	free(temp);

	return (1);
}
