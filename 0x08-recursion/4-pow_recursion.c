#include "main.h"


/**
 * _pow_recursion - x powered by y.
 *
 * @x: input
 * @y: input
 *
 * Return: x^y (success), -1 when y < 0.
 */

int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
		power = -1;
	else if (y == 0)
		power = 1;
	else
		power = x * _pow_recursion(x, y - 1);
	return (power);
}
