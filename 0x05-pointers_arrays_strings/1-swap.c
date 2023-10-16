#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two values of integers.
 *
 * @a: takes value of integer
 * @b: takes value of integer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
