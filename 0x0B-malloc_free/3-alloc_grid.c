#include "main.h"


/**
 * alloc_grid - points to a  2 dim array of integers.
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: NULL on failure, or if width or height are negative.
 */

char **alloc_grid(int width, int height)
{
	char *g;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc((width * height * 2) * sizeof(char));

	if (g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			g[j] = '0 ';
		}
		g[j] = '\n';
	}

	return (g);
}
