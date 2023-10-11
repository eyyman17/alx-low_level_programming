#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets from a to z 10 times
 *
 * return: always 0
 */

void print_alphabet_x10(void)
{
	int ch;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
