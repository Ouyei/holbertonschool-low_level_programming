#include "lists.h"

/**
 * free_listint - Frees list
 * @head: pointer to head list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
