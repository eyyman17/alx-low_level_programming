#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 *
 * @h: head of the list
 *
 * Return: The number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int n = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		n++;
	}
	return (n);
}
