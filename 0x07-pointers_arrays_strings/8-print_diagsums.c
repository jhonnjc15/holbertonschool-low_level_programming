#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - function that prints the chessboard
*@a: THe matrix
*@size: The length of the square matrix
*Return: the modify pointer dest
*On error, -1 is returned, and errno is set appropriately.
*/

void print_diagsums(int *a, int size)
{
	int i;
	int suma1, suma2;

	suma1 = 0;
	suma2 = 0;
	for (i = 0 ; i < size * size ; i = i + size + 1)
	{
		suma1 = suma1 + a[i];
	}
	for (i = size - 1 ; i < size * size - 1 ; i = i + size - 1)
	{
		suma2 = suma2 + a[i];
	}
	printf("%d, %d", suma1, suma2);
	printf("\n");
}

