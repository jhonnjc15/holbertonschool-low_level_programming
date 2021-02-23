#include "holberton.h"

/**
* print_chessboard - fill the first n bytes of the memory area with a constant b
*@a: A char pointer
*Return: the modify pointer dest
*On error, -1 is returned, and errno is set appropriately.
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar ('\n');
	}
}
