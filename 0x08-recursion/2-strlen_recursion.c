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
	int i;

	if (*s == '\0')
		return (0);
	else
	{
		return (1 + _strlen_recursion(char *s));
	}
}
