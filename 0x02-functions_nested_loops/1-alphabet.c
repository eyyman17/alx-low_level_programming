#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet: function that prints alphabets from a to z
 * 
 * Return: Always 0.
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
