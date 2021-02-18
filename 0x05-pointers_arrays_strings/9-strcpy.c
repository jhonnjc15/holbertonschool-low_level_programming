#include "holberton.h"
#include <stdio.h>
/**
* _strcpy - print n characters of a array
* @dest : pointer array
* @src : the number of elements to print
*
* Return: dest
* On error, -1 is returned, and errno is set appropriately.
*/

char *_strcpy(char *dest, char *src)
	{
	int index;

	for (index = 0 ; src[index] != '\0' ; index++)
	{
		dest[index] = src[index];
	}
	dest[index] = src[index];
	return (dest);
}
