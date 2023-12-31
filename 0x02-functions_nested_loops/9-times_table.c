#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success).
 */

void times_table(void)
{
	int m;
	int n;
	int r;

	for (m = 0; m < 10; m++)
	{
		_putchar('0');
		for (n = 1; n < 10; n++)
		{
			_putchar(',');
			_putchar(' ');
			r = n * m;

			if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');
			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
