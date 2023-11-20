#include "lists"

/**
 * add_nodeint - adds new node at the beginning
 *
 * @head: pointer to pointer to head of the list
 * @n: const integer
 *
 * Return: the address of the new element, or NULL if failed
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	head = &new;

	return (head);
}
