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

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 10; n++)
		{
			int r = n * m;

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
			_putchar(',');
			_putchar(' ');
			
		}
		_putchar('\n');
	}
}
