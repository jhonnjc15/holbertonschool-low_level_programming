#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	new_string = malloc(sizeof(char) * strlen(str) + 1);
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i <= strlen(str) ; i++)
	{
		new_string[i] = str[i];
	}
	return (new_string);
}
