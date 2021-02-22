#include "holberton.h"

/**
*_memcpy - fill the first n bytes of the memory area with a constant b
*@s: A char pointer
*@b: the constant to fill the pointer
*@n: the number of bytes to fill the pointer
*Return: the modify pointer s
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
