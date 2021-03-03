#include <stdio.h>
#include <stdlib.h>
/**
*create_array - function to create a array with malloc
*@size:length of the array 
*@c: character that initialize the array
*Return: the array
*On error, -1 is returned, and errno is set appropriately.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return NULL;
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return NULL;
	for (i = 0; i < size ; i++)
	{
		array[i] = c;
	}
	return (array);
}
