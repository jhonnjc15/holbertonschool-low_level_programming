#include <stdio.h>
#include <stdlib.h>

/**
*_memcpy - fill the first n bytes of the memory area with a constant b
*@dest: A char pointer
*@src: A char pointerthat will be copy in the s pointer
*@n: the number of bytes to fill the pointer
*Return: the modify pointer dest
*On error, -1 is returned, and errno is set appropriately.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
*_realloc - a function that reallocates a memory block
*@ptr: the start
*@old_size: the end
*@new_size: the end
*Return: the array
*On error, -1 is returned, and errno is set appropriately.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void  *array;
	unsigned int min;

	if (new_size > old_size || ptr == NULL)
	{
		array = malloc(new_size);
		min = new_size;
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		array = malloc(old_size);
		min = old_size;
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	_memcpy(array, ptr, min);
	free(ptr);
	return (array);
}
