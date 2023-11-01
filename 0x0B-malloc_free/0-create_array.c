#include "main.h"


/**
 * create_array - creates an array of chars.
 *
 * @size: integer
 * @c: char
 *
 * Return: NULL if size = 0, a pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
		return (NULL);
	c = malloc(size * sizeof(char));
	for (i = 0; i <= size; i++)
		c[i] = c;
}
