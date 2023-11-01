#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string.
 *
 * Return: NULL is str = NULL, a pointer to the duplicate string is success.
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *strcpy;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	strcpy = malloc(len * sizeof(char));
	for (i = 0; i < len; i++)
		strcpy[i] = str[i];
	if (strcpy == NULL)
		return (NULL);
	return (strcpy);
}
