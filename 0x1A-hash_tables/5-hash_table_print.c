#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 * Return: Nothing
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, printed;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	printed = 0;
	for (i = 0; ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			printed = 1;
		}
	}
	printf("}\n");
}
