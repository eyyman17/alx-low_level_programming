#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: head of the list
 * @idx: index
 * @n: content of the new node
 *
 * Return: address of the new node, NULL if failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = head, *new, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL && idx == 0)
	{
		*head = new;
		return (new);
	}

	while (i < (idx - 1))
	{
		ptr = ptr->next;
		if (ptr->next == NULL)
			return (NULL);
		i++;
	}

	temp = ptr;
	ptr = ptr->next;
	temp->next = &new;
	new->n = n;
	new->next = ptr->next;

	return (new);
}
