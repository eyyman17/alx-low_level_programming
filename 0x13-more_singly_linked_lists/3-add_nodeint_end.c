#include "lists.h"

/**
 * add_modeint_end - add a new node at the end of the list
 *
 * @head: head of list
 * @n: value of node
 *
 * Return: the address of the new element, or NULL if it failed
 **/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc (sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;

	return (new);
}
