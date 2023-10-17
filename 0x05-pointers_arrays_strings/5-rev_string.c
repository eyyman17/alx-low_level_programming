#include "main.h"


/**
 * rev_string - reverses a string.
 *
 * @s: a string.
 */

void rev_string(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		s[0] = s[len];
		len++;
	}
}
