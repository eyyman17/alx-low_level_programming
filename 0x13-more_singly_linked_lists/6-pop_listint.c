#include "lists"

/**
 * pop_listint - deletes the head node of a linked list
 *
 * @head: the head of the list
 *
 * Return: the head node's data(n)
 **/

int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	free(head);
}
