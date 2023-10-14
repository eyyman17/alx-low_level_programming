#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */


void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m /10);
	}
	_putchar((m % 10) + 48);
}
