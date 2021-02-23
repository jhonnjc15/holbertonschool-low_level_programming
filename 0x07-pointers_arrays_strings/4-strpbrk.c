#include "holberton.h"
/**
*_strpbrk - fill the first n bytes of the memory area with a constant b
*@s: A char pointer
*@accept: A char pointer
*Return: the modify pointer dest
*On error, -1 is returned, and errno is set appropriately.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
