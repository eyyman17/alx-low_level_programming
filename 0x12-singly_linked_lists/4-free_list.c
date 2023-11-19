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
	list_t *ptr;
	list_t *temp;

	ptr = *head;

	while (ptr->next != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}
