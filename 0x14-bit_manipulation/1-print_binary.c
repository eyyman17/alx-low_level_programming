#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * @n: the number.
 *
 * Return: Nothing
 **/

void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL;
	int i = 0;

	m = m << (sizeof(unsigned long int) * 8 - 1);

	while (m > 0)
	{
		if (n & m)
		{
			_putchar('1');
			i = 1;
		}
		else if (i || m == 1)
			_putchar('0');

		m >>= 1;
	}
	if (!i)
		_putchar('0');
}
