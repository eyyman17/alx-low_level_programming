#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0' ; i < 16 ; i++)
	{
		putchar('%x', i);
	}
	putchar('\n');

	return (0);
}
