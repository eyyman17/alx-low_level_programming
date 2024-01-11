#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a d linked list.
 * @head: head of the list
 *
 * Return: if list is empty, 0
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
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
