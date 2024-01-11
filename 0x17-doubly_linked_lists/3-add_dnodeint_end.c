#include "lists.h"

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: head of the d linked list
 * @n: content of new node
 *
 * Return: the address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *ptr = *head;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = ptr;

	return (new);
}
