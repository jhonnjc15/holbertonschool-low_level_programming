#include <stdio.h>
#include <stdlib.h>

/**
*longitud - Give us the length of a string
*@s: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

unsigned int longitud(char *s)
{
	if (!(*s))
		return (0);
	return (1 + longitud(s + 1));
}

/**
*_strdup - function to copy an string with malloc
*@str:The string that will be copied
*Return: the new string
*On error, -1 is returned, and errno is set appropriately.
*/

char *_strdup(char *str)
{
	char *new_string;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	new_string = malloc(sizeof(char) * longitud(str) + 1);
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i <= longitud(str) ; i++)
	{
		new_string[i] = str[i];
	}
	return (new_string);
}
