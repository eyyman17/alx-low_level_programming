#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each element of an array.
 *
 * @array: array
 * @size: size
 * action: function pointer
 *
 * Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
