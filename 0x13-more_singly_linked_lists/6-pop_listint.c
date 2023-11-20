#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: the head of the list
 *
 * Return: the head node's data(n)
 **/

int pop_listint(listint_t **head)
{
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	free(head);

	return (n);
}
