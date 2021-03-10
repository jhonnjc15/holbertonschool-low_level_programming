#include <stdio.h>
#include "function_pointers.h"
/**
*array_iterator - function to travel inside of a array
*@array: the array
*@size: the size of the array
*@action: the function to use
*Return: Nothing
*On error, -1 is returned, and errno is set appropriately.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size ; i++)
	{
		(*action)(array[i]);
	}
}
