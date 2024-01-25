#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 0 when success.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1) - ((int)*s2);
			break;
		}
		s1++;
		s2++;
	}
	return (i);
}
