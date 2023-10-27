#include "main.h"

/**
 * _strlen_recursion - returns length of a string.
 *
 * @s: the string.
 *
 * Return: len(s).
 **/

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
