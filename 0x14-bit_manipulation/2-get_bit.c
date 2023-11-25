#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 *
 * @n: number
 * @index: the index starting from 0
 *
 * Return: the value of the bit at index index or -1 if an error occured
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = n >> index;
	int bit_value;

	bit_value = bit & 1;

	return (bit_value);
}
