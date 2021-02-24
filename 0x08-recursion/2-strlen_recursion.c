#include "holberton.h"

/**
*_strlen_recursion - This function give us the length of a string
*@s: A char pointer string
*Return: The lenght of the string
*On error, -1 is returned, and errno is set appropriately.
*/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(&s[1]));
}
