#include "3-calc.h"

/**
 * main - Calculator
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
			printf("Error\n");
		if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
			printf("Error\n");

		printf("%d\n", op_func(a, b));
		return (0);
	}
	else
		printf("Error\n");
	return (0);
}
