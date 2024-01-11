#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head of the list
 * @idx: the index of the new node
 * @n: content of new node
 *
 * Return: the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h, *new;
	unsigned int i;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		new->next = NULL;
		new->prev = *h;
		if (*h != NULL)
			(*h)->next = new;
		return (new);
	}

	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;

	return (new);
}
