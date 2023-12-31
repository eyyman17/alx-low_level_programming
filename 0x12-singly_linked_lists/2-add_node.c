#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 *
 * @head: head of the list
 * @str: string
 *
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_to_add;
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
	node_to_add->next = *head;
	node_to_add->len = strlen(strd);
	*head = node_to_add;

	return (node_to_add);
}
