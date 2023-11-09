#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 *
 * @array: array
 * @size: size
 * @action: function pointer
 *
 * Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
