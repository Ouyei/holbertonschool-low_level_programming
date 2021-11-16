#include "lists.h"

/**
* sum_listint - sum the data (n) in list
* @head: pointer to the list head
* Return: sum of data, or 0
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
