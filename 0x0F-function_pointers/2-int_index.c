#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: array
 * @size: size
 * @cmp: function pointer
 *
 * Return: index of 1st element
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
		}
		if (r == 0)
			return (-1);
	}

	return (i);
}
