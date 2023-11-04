#include "main.h"

/**
 * word_count - count words in str.
 * @str: string.
 *
 * Return: 1 When success, 0 when fails.
 **/

int word_count(char *str)
{
	int i, c;

	c = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				c++;
		}
		else if (i == 0)
			c++;
	}
	c++;
	return (c);
}

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
	int i, j, k = 0, t, c, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = word_count(str);
	if (c == 1)
		return (NULL);
	w = malloc(c * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[c - 1] = NULL;
	while (str[k])
	{
		if (str[k] != ' ' && (k == 0 || str[k - 1] == ' '))
		{
			for (j = 1; str[k + j] != ' ' && str[k + j]; j++)
				;
			j++;
			w[count] = malloc(j * sizeof(char));
			j--;
			if (w[count] == NULL)
			{
				for (t = 0; t < count; t++)
					free(w[t]);
				free(w[c - 1]);
				free(w);
				return (NULL);
			}
			for (i = 0; i < j; i++)
				w[count][i] = str[k + i];
			w[count][i] = '\0';
			count++;
			k += j;
		}
		else
			k++;
	}
	return (w);
}
