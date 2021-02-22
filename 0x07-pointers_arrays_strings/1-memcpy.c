#include "holberton.h"

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
