#include "main.h"

/**
 * _realloc - reallocate memory block using malloc and free.
 *
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 * Return: Nothing.
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	int t;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		for (t = 0; t < old_size && i < new_size; t++)
			*((char *)p + t) = *((char *)ptr + i);
		free(ptr);
	}

	return (p);
}
