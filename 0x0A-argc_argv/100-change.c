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
	int i, c, m;
	int cents[] = {25, 10, 5, 2, 1};
	c = 0;
	m = atoi(argv[1]);

	if (argc == 2)
	{
		if (m < 0)
			return (printf("0\n"));
		for (i = 0; i < 5; i++)
			if (m >= cents[i])
			{
				c += m / cents[i];
				m = m % cents[i];
				if (m % cents[i] == 0)
				{
					break;
				}
			}
	}
	else
	{
		return (printf("Error\n"), 1);
	}

	return (0);
}
