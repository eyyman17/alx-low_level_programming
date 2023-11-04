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
	int i, j, k, str_len, word_count, word_len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	str_len = 0;
	while (str[str_len] != '\0')
		str_len++;
	w = malloc((str_len + 1) * sizeof(char));
	if (w == NULL)
		return (NULL);

	word_count = 0;
	for (i = 0; i < str_len; i++)
	{
		if (str[i] != ' ')
		{
			word_len = 0;
			while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
				word_len++;

			w[word_count] = malloc((word_len + 1) * sizeof(char));
			if (w[word_count] == NULL)
			{
				for (j = 0; j < word_count; k++)
					free(w[j]);
				free(w);
				return (NULL);
			}
			for (k = 0; k < word_len; k++)
				w[word_count][k] = str[i + k];
			w[word_count][word_len] = '\0';
			word_count++;
			i += word_len;
		}
	}
	w[word_count] = NULL;
	return (w);
}
