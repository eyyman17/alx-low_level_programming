#include "main.h"

/**
 * int flip_bits - returns the number of bits needed to flip to get from n to m
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int ex;

	ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = ex >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
