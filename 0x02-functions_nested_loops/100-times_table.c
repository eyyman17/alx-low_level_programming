#include "main.h"

/**
 * print_times_table - function that prints the n times table.
 *
 * @n: takes value of an integer.
 *
 * Return: Always 0.
 */

void print_times_table(int n)
{
	int i;
	int j;
	int m;

	if (n >= 0 && n <= 15)
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				m = i * j;
				_putchar(',');
				_putchar(' ');

				if (m < 10)
					_putchar(' ');
				if (m < 100)
					_putchar(' ');
				if (m >= 100)
				{
					_putchar((m / 100) + '0');
					_putchar((m / 10) % 10 + '0');
				}
				else if (m < 100 && m > 9)
				{
					_putchar((m / 10) + '0');
				}
				_putchar((m % 10) + '0');
			}
		_putchar('\n');
		}
}
