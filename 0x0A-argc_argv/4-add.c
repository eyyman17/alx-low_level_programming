#include "main.h"


/**
 * main - entry point
 *
 * @argc: arguments counter
 * @argv: argument passed.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum;
	char *p;

	sum = 0;

	while (--argc)
	{
		for (p = argc[argc]; *p; c++)
			if (p < '0' || *p > '9')
				return (printf("Error\n"), 1);
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
