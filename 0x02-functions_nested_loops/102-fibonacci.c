#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	long long int i, x, y, z;

	x = 1;
	y = 2;

	printf("%lld, ", x);
	printf("%lld", y);
	for (i = 0; i < 48; i++)
	{
		printf(", ");
		z = x + y;
		printf("%lld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
