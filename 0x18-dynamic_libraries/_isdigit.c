#include "main.h"

/**
 * _isdigit - checks if a c is a digit 0 to 9.
 *
 * @c: takes value of int
 *
 * Return: returns 1 if c is a digit.
 *         returns 0 otherwise.
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
