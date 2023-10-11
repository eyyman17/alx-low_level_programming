#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, x, y, z;

	x = 1;
	y = 2;

	printf("%d, ", x);
	printf("%d, ", y);
	for (i = 0; i < 50; i++)
	{
		z = x + y;
		printf("%d, ", z);
		x = y;
		y = z;
	}
	printf("\n");
}
