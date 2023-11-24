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
	int num, i;

	num = n;

	while (num != 0 && num != 1)
	{
		_putchar((num % 2) - '0');
		i++;
		num = num >> 2;
	}
	i++;
	if (num == 1)
		_putchar('1');
	if (num == 0)
		_putchar('0');
}
