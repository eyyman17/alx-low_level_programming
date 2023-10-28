#include "main.h"


/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: string
 * @accept: accept.
 *
 * Return: returns i.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				i++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}

