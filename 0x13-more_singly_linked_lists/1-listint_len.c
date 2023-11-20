#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 *
 * @h: head of the list
 *
 * Return: number of elements
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	int len = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}

	return (len);
}
