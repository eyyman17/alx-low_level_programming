#include "main.h"

/**
 * main - entry point
 *
 * Description: prints sum of all multiples of 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0.
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		sum = 0;
		if ((num % 3) == 0 || (num % 5) == 0)
			sum += num;
	}
	printf("%d", sum);
	return (0);
}
