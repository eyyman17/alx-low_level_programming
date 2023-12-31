#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: checks input of function
 *
 * Return: returns 1 if c is a letter, lowercase or uppercase,
 *         returns 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
