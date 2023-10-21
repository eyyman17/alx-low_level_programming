#include "main.h"

/**
 * print_number - prints an integer
 * @n : integer.
 * Return: Nothing.
 */

void print_number(int n)
{
	unsigned int i;
	int sign = -1;

	i = n;
	if (n < 0)
	{
		_putchar('-');
		i = sign * n;
	}
	if (i / 10 != 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
