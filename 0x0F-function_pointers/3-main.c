#include "3-calc.h"

/**
 * main - Calculator
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 when success.
 */




int main(int argc, char *argv[])
{
	int (*op_func)(int, int), a, b;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op_func = get_op_func(argv[2]);
		if (!op_func)
			printf("Error\n"), exit(97);
		if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
			printf("Error\n"), exit(59);

		printf("%d\n", op_func(a, b));
		return (0);
	}
	else
		printf("Error\n"), exit(98);
	return (0);
}
