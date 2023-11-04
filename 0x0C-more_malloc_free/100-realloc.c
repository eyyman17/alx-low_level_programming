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
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(old_size + new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
