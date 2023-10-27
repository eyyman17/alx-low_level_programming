#include "main.h"

/**
 * is_prime_number - checks if input is prime number
 *
 * @n: input
 * @m : integer
 * Return: Always 1 if n is prime number, otherwise 0.
 */

int prime(int n, int m);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, n - 1));
}


/**
 * prime - checks if input is prime number
 *
 * @n: input
 * @m: integer
 *
 * Return: Always 1 if n is prime number, otherwise 0.
 */

int prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 1)
		return (0);
	return (prime(n, m - 1));
}
