#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: input
 * @max: input
 *
 * Return: the pointer to the newly created array
 **/

int *array_range(int min, int max)
{
	int *a;
	int i, num;

	if (min > max)
		return (NULL);

	num = max - min + 1;

	a = malloc(num * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
