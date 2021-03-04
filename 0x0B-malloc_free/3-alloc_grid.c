#include <stdio.h>
#include <stdlib.h>

/**
*longitud - Give us the length of a string
*@s: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

int longitud(char *s)
{
	if (!(*s))
		return (0);
	return (1 + longitud(s + 1));
}

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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	D_array = malloc(sizeof(int) * width);
	if (D_array == NULL)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		D_array[i] = malloc(sizeof(int) * height);
		if (D_array[i] == NULL)
			return (NULL);
		for (j = 0; j < width ; j++)
		{
			D_array[i][j] = 0;
		}
	}
	return (D_array);
}
