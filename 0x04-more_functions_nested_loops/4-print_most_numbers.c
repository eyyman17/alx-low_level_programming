#include "main.h"

/**
 * print_most_numbers - print from 0 to 9 except 2 and 4.
 *
 **/

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
			i++;
		}
		else
			i++;
	}
	_putchar('\n');
}
