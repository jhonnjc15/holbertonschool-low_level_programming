#include "holberton.h"

/**
*set_string - fill the first n bytes of the memory area with a constant b
*@s: A char pointer
*@to: A char pointer
*Return: the modify pointer dest
*On error, -1 is returned, and errno is set appropriately.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
