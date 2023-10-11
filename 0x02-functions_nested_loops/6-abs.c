#include "main.h"


/**
 * _abs - prints absolute value of an integer.
 *
 * @i: takes an integer type.
 *
 * Return: Always 0 when success.
 */

int _abs(int i)
{
	if (i < 0)
		i = (-1) * i;
	return (i);
}
