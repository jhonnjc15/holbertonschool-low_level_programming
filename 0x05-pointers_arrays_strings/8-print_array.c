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

	for (i = 0 ; i < n - 1 ; i++)
	{
		printf("%d, ", a[i]);
	}
	/*finally we take the last value of i to print the last element */
	printf("%d", a[i]);
	printf("\n");
}
