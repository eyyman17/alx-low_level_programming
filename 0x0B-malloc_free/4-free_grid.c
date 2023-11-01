#include "main.h"


/**
 * free_grid - freeing the 2 dim grid.
 *
 * @grid: grid of pointers.
 * @height: height of the grid.
 **/

void free_grid(int **grid, int height)
{
	free(grid[height]);
}
