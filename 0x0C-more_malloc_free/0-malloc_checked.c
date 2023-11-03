#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned integer
 *
 * Return: pointer to the allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);

	if (s == 0)
		exit(98);

	return (s);
}
