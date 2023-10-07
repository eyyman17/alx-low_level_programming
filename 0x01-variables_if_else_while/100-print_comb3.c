#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	i = 0;

	while (i <= 9)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (j < 9 && i < 9)
				{
					putchar(',');
					putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
