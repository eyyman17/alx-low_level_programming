#include "main.h"

/**
 * print_diagonal - draws a straight line.
 *
 * @n: integer
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= n; j++)
				_putchar(' ');
			_putchar('\');
		}
	_putchar('\n');
}
