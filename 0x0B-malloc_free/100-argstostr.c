#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program.
 *
 * @ac: input
 * @av: input
 *
 * Return: NULL if ac = 0, av = NULL or it fails.
 **/

char *argstostr(int ac, char **av)
{
	char *s;
	int len, i, j, position;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			len++;
		}
		len++;
	}

	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);

	position = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, position++)
			s[position] = av[i][j];
		s[position] = '\n';
		position++;
	}
	s[position] = '\0';

	return (s);
}
