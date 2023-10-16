#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of 2 integers.
 * @a: takes value of an integer.
 * @b: takes value of an integer.
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
