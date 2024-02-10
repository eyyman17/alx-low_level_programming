#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to update
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *key_dup, *value_dup;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	key_dup = strdup(key);
	value_dup = strdup(value);
	if (key_dup == NULL || value_dup == NULL)
	{
		free(key_dup);
		free(value_dup);
		return (0);
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(key_dup);
		free(value_dup);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_dup;
			free(new);
			return (1);
		}
	}
	new->key = key_dup;
	new->value = value_dup;
	new->next = (ht->array)[index];
	(ht->array)[index] = new;
	return (1);
}
