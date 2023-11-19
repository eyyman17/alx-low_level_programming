#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head of the list
 *
 * Return: Nothing
 **/

void free_list(list_t *head)
{
	if (head)
		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
}
