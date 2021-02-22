#include "holberton.h"

/**
*_strchr - fill the first n bytes of the memory area with a constant b
*@s: A char pointer
*@c: A char pointer
*Return: the modify pointer dest
*On error, -1 is returned, and errno is set appropriately.
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			s = &s[i];
			return (s);
		}
		i++;
	}
	return (s);
}
