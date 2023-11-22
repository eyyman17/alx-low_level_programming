#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of a linked list.
 *
 * @head: head of the list
 *
 * Return: sum of all data, if empty return 0
 **/

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
