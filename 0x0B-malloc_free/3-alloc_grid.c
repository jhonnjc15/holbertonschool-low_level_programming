#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - function to create a 2D array
*@width:the number of columns
*@height:the number of rows
*Return: A 2D array
*On error, -1 is returned, and errno is set appropriately.
*/

int **alloc_grid(int width, int height)
{
	int **D_array;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	D_array = malloc(sizeof(int *) * height);
	if (D_array == NULL)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		D_array[i] = malloc(sizeof(int) * width);
		if (D_array[i] == NULL)
		{
			free(D_array);
			return (NULL);
		}
		for (j = 0; j < width ; j++)
		{
			D_array[i][j] = 0;
		}
	}
	return (D_array);
}
