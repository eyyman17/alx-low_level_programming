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
	int k;

	i = 0;

	while (i <= 9)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			for (k=0 ; k<10 ; k++)
			{
				if (i != j && i != k && j !=k && i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i + j + k != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
