#include "main.h"

/**
 * power - exponentiation
 *
 * @base: the base
 * @exponent: the exponent
 *
 * Return: result
 **/

int power(int base, int exponent)
{
	int result = 1;

	while (exponent > 0)
	{
		result *= base;
		exponent--;
	}
	return (result);
}

/**
 * binary_to_uint - converts binary number to an unsigned int
 *
 * @b: pointer to string of 0 and 1.
 *
 * Return: the converted number, or 0.
 **/

unsigned int binary_to_uint(const char *b)
{
	int i, len = 0, sum = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != 0 && b[len] != 1)
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		sum += b[i] * power(2, (len - 1));
	}

	return (sum);
}
