#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - function to create a array with malloc
*@nmemb: number of elements
*@size: the size of each element
*Return: the array
*On error, -1 is returned, and errno is set appropriately.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size ; i++)
	{
		array[i] = 0;
	}
	return (array);
}
