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
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0' && s[i] == '\0')
		return (&s[i]);
	return ('\0');
}
