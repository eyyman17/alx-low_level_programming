#include "main.h"

/**
 * power - return power of a number.
 * @a : Int.
 * @b : Int.
 * Return: Power of a number;
 */
unsigned int power(int a, int b)
{
	int result = 1, i;
	
	if (b == 0)
		return (1);
	for (i = 0; i < b; i++)
		result = result * a;
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
	int i, len = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (i = 0; b[i] != '\0' ; i++)
	{
		dec += power(2, len - 1 - i);
	}

	return (dec);
}
