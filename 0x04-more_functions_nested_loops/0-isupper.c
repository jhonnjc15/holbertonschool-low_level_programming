#include "holberton.h"

/**
* _isupper - print the alphabet
* @c: The character to print
*
* Return: 0 or 1
* On error, -1 is returned, and errno is set appropriately.
*/

int _isupper(int c)
	{
	if (c >= 97 && c <= 122)
		{
		return (0);
	}
	else if (c >= 65 && c <= 90)
		{
		return (1);
	}
	else
		{
		return (3);
	}
}
