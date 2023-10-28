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
		printf("Error");
		return (1);
	}
	else
	{
		m = argv[1] * argv[2];
	}
	return (0);
}
