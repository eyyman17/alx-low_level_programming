#include "lists.h"

/**
 * print_listint - print all elements of a listint_t list
 *
 * @h: pointer to header
 *
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
