#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char hexa;

	for (i = 0 ; i < 16 ; i++)
	{
		if (i < 10)
		{
			hexa = '0' + i;
		}
		else
		{
			hexa = 'a' + i;
		}
		putchar(hexa);
	}
	putchar('\n');

	return (0);
}
