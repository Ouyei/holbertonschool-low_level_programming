#include <stdlib.h>
#include "lists.h"
/**
  * sum_dlistint - Sum of all data in a doubly linked list.
  * @head: The head of the doubly linked list.
  * Return: The sum of all data.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);

}
