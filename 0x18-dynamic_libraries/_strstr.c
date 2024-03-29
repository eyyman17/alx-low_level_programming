#include "main.h"

/**
 * _strstr - Locates a substring.
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *q = needle;

		while (*p == *q && *q != '\0')
		{
			p++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
