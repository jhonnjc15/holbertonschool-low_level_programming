#include <stdio.h>
#include <stdlib.h>
/**
*malloc_checked - function to allocate memory using malloc.
*@b: the number of bytes to use
*Return: the array
*On error, -1 is returned, and errno is set appropriately.
*/

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
