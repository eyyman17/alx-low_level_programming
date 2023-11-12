#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 *
 * @separator: const char
 * @n: unsigned int
 *
 * Return: 0 (success)
 **/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator == NULL || i == (n - 1))
			continue;
		else
			printf("%s", separator);
	}
	printf("\n");
}
