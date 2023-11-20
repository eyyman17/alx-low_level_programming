#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head of the list
 *
 * Return: Nothing.
 **/

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = head;
		temp = temp->next;
		free(head);
		head = temp;
	}
}
