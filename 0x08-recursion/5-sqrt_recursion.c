#include "main.h"


/**
 * _sqrt_recursion - Square root of a number
 *
 * @n: input
 * @m: int
 * Return: square root of n, -1 when n does not have it.
 */

int sqrt(int n, int m);

int _sqrt_recursion(int n)
{
	return (sqrt(int n, 1));
}

/**
 * sqrt - Square root of a number
 *
 * @n: input
 * @m: concatenator
 *
 * Return: square root of n, -1 when n does not have it.
 */


int sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
	{
		return (sqrt(n, m + 1));
	}
	else
		return (-1);
}
