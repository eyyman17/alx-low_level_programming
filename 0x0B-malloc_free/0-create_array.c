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
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	for (i = 0; i <= size; i++)
		s[i] = s;
}
