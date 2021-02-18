#include "holberton.h"
#include <stdio.h>
/**
* print_array - print n characters of a array
* @a : A pointer array
* @n : the number of elements to print
*
* Return: the half of a string
* On error, -1 is returned, and errno is set appropriately.
*/

void print_array(int *a, int n)
	{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
