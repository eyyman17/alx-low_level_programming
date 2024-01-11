#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 *
 * Return: Nothing
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *temp;

	while (ptr != NULL)
	{
		temp = ptr;
		free(temp);
		ptr = ptr->next;
	}
}
