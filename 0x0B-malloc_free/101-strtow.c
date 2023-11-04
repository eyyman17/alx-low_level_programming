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
	int i, j, len;


	if (str == NULL || str[0] == '\0')
		return (NULL);

	len = 0;
	while (str[len] != '\0')
		len++;

	w = malloc((len + 1) * sizeof(char));
	if (w == NULL)
		return (NULL);

	j = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			w[j][0] = str[i];
			w[j][1] = '\0';
			j++;
		}
	}

	w[j] = NULL;

	return (w);
}
