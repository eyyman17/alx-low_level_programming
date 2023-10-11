#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n : takes the value of a number.
 *
 * Return: returns the value of the last digit.
 */

int print_last_digit(int n)
{
	int m;

	if (n < 0)
		m = -1 * (n % 10);
	else
		m = n % 10;

	_putchar(m + '0');
	return (m);
}
