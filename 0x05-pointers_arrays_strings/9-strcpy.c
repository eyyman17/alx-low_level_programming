#include "main.h"

/**
 * *_strcpy - check the code
 * @dest: dest
 * @src: src
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
