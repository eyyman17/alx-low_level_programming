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

	m = m << (sizeof(unsigned long int) * 8 - 1);

	while (m > 0)
	{
		if (n & m)
			_putchar('1');
		else
			_putchar('0');

		m >>= 1;
	}
}
