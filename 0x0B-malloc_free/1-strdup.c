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
	char *strcpy;

	if (str == NULL)
		return (NULL);
	strcpy = malloc(str * sizeof(char));
	for (i = 0; i < str; i++)
		strcpy[i] = str[i];
	if (strcpy == NULL)
		return (NULL);
	return (strcpy);
}
