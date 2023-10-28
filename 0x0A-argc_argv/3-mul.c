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
	int m;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		print("%d\n", m);
	}
	return (0);
}
