#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long x, y, z;

	x = 1;
	y = 2;

	printf("%lu, ", x);
	printf("%lu", y);
	for (i = 0; i < 96; i++)
	{
		printf(", ");
		z = x + y;
		printf("%lu", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
