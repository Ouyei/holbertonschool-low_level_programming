#include "lists.h"

/**
 * free_listint2 - Frees a list of ints.
 * @head: Address of pointer to first node.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp; /*Declaring list*/

	if (head == NULL)
		return;
	while (*head) /*Run through the list to the end*/
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
