#include "main.h"


/**
 * rev_string - reverses a string.
 *
 * @s: a string.
 */

void rev_string(char *s)
{
	int len;
	int str2[len];
	int i;

	len = 0;
	while (s[len] != '\0')
	{
		str2[0] = s[len];
		len++;
	}
	for (i = 1; i <= len; i++)
		s[i] = str2[i];
}
