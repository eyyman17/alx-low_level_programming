#include "main.h"


/**
 * _sqrt_recursion - Square root of a number
 *
 * @n: input
 * @m: int
 * Return: square root of n, -1 when n does not have it.
 */

int sqrtfunction(int n, int m);

int _sqrt_recursion(int n)
{
	return (sqrtfunction(n, 1));
}

/**
 * sqrtfunction - Square root of a number
 *
 * @n: input
 * @m: concatenator
 *
 * Return: square root of n, -1 when n does not have it.
 */


int sqrtfunction(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m * m < n)
	{
		return (sqrtfunction(n, m + 1));
	}
	else
		return (-1);
}
