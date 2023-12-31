#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 *
 * Return: pointer to newly allocated space in memory
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, j, len1, len2;
	unsigned int m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0, m = 0; (j < len2) && (m < n); j++, m++)
	{
		concat[len1] = s2[j];
		len1++;
	}
	concat[len1] = '\0';


	return (concat);
}
