#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 *
 * @h: list
 *
 * Return: Number of nodes
 **/

size_t print_list(const list_t *h)
{
	const list_t *current = list;
	int n = 1;

	if (str == NULL)
		print("[0] (nil)");
	else
		while (current != NULL)
		{
			printf("%s \n", current->str);
			current = current->next;
			n++;
		}
	return (n);
}
