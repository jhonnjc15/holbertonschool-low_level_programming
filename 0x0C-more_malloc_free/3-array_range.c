#include <stdio.h>
#include <stdlib.h>
/**
*array_range - a array rage
*@min: the start
*@max: the end
*Return: the array
*On error, -1 is returned, and errno is set appropriately.
*/

int *array_range(int min, int max)
{
	int  *array;
	int i, count;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	count = 0;
	for (i = min; i <= max ; i++)
	{
		array[count] = i;
		count++;
	}
	return (array);
}
