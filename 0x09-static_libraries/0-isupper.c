#include "main.h"

/**
 * _isupper - Checks if a letter is uppercase
 *
 * @c: takes the value of an integer.
 *
 * Return: returns 1 if c is uppercase.
 *         returns 0 if otherwise.
 **/


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
