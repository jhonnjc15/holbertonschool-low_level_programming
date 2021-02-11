#include "holberton.h"

/**
* _isdigit - print the alphabet
* @c: The character to print
*
* Return: 0 or 1
* On error, -1 is returned, and errno is set appropriately.
*/

int _isdigit(int c)
	{
	if (c >= 48 && c <= 57)
		{
		return (1);
	}
	else
		{
		return (0);
	}
}
