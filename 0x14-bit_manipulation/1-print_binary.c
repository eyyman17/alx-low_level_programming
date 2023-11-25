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
	int num, i = 0, j;
	char buffer[64];

	num = n;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (num != 0 && num != 1)
	{
		buffer[i++] = (num % 2) + '0';
		num = num >> 1;
	}

	buffer[i++] = (num == 1) ? '1' : '0';

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);
}
