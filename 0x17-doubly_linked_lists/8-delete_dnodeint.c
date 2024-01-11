#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a dlinked list
 *
 * @head: head of the list
 * @index: index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (-1);
		ptr = ptr->next;
	}

	ptr->prev->next = ptr->next;
	ptr->next->prev = ptr->prev;

	free(ptr);

	return (1);
}
