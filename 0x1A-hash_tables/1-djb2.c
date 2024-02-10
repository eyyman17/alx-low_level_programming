#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	hash_table_t *table;
	unsigned long int hash;
	int c;

	table = malloc(sizeof(hash_table_t));
	if (table = NULL)
		return (NULL);

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	table->size = hash;
	table->array = calloc(hash, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (hash);
}
