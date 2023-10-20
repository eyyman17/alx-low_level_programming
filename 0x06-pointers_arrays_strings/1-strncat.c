#include "main.h"


/**
 * _strncat - Concatenates two strings.
 *
 * @dest : the first string.
 * @src : the second string.
 * @n: integer
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n ; j++)
	{
		dest[i + j] = src[j];
	}
	for (k = 0; src[k] != '\0'; k++)
		if (k >= n)
			dest[i + j] = '\0';
	return (dest);
}
