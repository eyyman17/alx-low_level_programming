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
	list_t *temp;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
