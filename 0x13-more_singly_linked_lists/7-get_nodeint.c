#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node, if the node does not exist; NULL
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		ptr = ptr->next;
		if (ptr->next == NULL)
			return (NULL);
		i++;
	}

	return (ptr);
}
