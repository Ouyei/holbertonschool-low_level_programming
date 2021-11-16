#include "lists.h"

/**
* sum_listint - Sum the data (n) in list.
* @head: Pointer 2 the list head.
* Return: Sum of data otherwise 0.
**/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
