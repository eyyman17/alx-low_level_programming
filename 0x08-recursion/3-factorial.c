#include "main.h"

/**
 * factorial - factorial of a number.
 *
 * @n: input.
 *
 * Return: n!.
 **/

int factorial(int n)
{
	int fact;

	if (n < 0)
		fact = -1;
	else if (n == 0)
		fact = 1;
	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
