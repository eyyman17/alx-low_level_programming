#include "main.h"

/**
 * strtow - splits string into words
 *
 * @str: string.
 *
 * Return: NULL when fails.
 */

char **strtow(char *str)
{
	char **w;
	int i, j, l, m, n, w;

	n = 0;
	w = 0;

	if (str == NULL || str == "")
		return (NULL);
	n = wr
