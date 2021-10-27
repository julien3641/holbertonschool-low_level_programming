#include "main.h"
#include "stdlib.h"

/**
 * free_grid - freed the alloc memory of the third function
 * @grid: width
 * @height: height
 * Return: 0
 */
void free_grid(int **grid, int height)

{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
