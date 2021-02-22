#include "holberton.h"

/**
*_memset - fill the first n bytes of the memory area with a constant b
*@s: A char pointer
*@b: the constant to fill the pointer
*@n: the number of bytes to fill the pointer
*Return: the modify pointer s
*On error, -1 is returned, and errno is set appropriately.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
