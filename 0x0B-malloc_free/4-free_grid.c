#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - The function frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: The number of colomns
 * @height: The number of rows
 * Return: 0 (Success)
 */
void free_grid(int **grid, int height)
{
int k;
for (k = 0; k < height; k++)
{
	free(grid[k]);
}
free(grid);
}
