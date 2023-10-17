#include "main.h"


/**
 * _atoi - Converts a string to an integer.
 *
 * @s: String.
 *
 * Return: returns integer.
 */

int _atoi(char *s)
{
	int i;
	int sign = 1;
	unsigned int result = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s + '0');
		else if (result > 0)
			break;
	} while (*s++);

	return (result * sign);
}
