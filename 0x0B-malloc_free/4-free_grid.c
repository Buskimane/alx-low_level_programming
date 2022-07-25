#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2 dimensional grid
 * @grid: pointer to a 2D grid
 * @height: height of the 2D grid
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height == 0)
return;

for (i = height - 1; i >= 0; i--)
{
free(grid[i]);
}

free(grid);
}
