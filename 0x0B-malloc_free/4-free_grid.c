#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - function to frees a 2D array
*@grid:The 2D array
*@height:the number of rows
*Return: A 2D array
*On error, -1 is returned, and errno is set appropriately.
*/

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
		free(grid[k]);
	free(grid);
}
