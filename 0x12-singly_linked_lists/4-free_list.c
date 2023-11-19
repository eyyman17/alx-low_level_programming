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
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = temp;
	}
}
