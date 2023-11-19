#include "lists.h"

/**
 * add_node_end - add node to the end of the list_t list
 *
 * @head: head of the list
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *node_to_add;
	char *strd;

	if (str == NULL)
		return (NULL);

	node_to_add = malloc(sizeof(list_t));
	if (node_to_add == NULL)
		return (NULL);

	strd = strdup(str);
	if (strd == NULL)
	{
		free(node_to_add);
		return (NULL);
	}
	node_to_add->str = strd;
	node_to_add->next = NULL;

	if (*head == NULL)
		*head = node_to_add;
	ptr = *head;

	while (ptr != NULL && ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = node_to_add;

	return (node_to_add);
}
