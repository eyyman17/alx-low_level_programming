#include "variadic_functions.h"


/**
 * sum_them_all - sum all parameters of the function
 *
 * @n: const unsgined int
 *
 * Return: returns the sum (success), returns 0 if n = 0.
 **/


int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(args);

	return (sum);
}
