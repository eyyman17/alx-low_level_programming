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

	for (i = 0; i < (idx - 1); i++)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;
	ptr->next = new;

	return (new);
}
