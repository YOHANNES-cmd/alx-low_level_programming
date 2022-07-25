#include "main.h"
/**
 * free_grid - frees a two dimension array
 * @grid: memory block to be free
 * @height: height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
