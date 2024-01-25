#include "main.h"


/**
 * _abs - prints absolute value of an integer.
 *
 * @n: takes an integer type.
 *
 * Return: Always 0 when success.
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
