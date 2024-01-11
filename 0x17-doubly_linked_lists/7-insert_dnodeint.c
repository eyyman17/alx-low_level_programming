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
	dlistint_t *ptr = *h, *new, *temp;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	while (i != idx && ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	if (i == idx && ptr == NULL)
	{
		temp->next = new;
		new->prev = temp;
		new->next = ptr;
		return (new);
	}
	temp->next = new;
	new->prev = temp;
	new->next = ptr;
	ptr->prev = new;
	return (new);
}
