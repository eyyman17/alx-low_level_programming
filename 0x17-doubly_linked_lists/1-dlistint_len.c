#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlinked list
 * @h: head of the d linked list
 * Return: number of elements
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int n = 0;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
