#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - function to travel inside of a array
*@array: the array
*@size: the size of the array
*@cmp: the function to use
*Return: Nothing
*On error, -1 is returned, and errno is set appropriately.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
