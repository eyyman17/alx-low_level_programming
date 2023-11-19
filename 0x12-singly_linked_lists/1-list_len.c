#include "lists.h"

/**
 * list_len - returns the number of elemets in a linked list_t list
 *
 * @h: the list_t
 *
 * Return: the number of elements
 **/

size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
