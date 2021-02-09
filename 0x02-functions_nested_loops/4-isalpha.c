#include "holberton.h"

/**
 * _isalpha - print the alphabet
 * @c: The character to print
 *
 * Return: 1 if c is a alphabetic character  or 0 otherwise.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
	{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		{
		return (1);
	}
	else
		{
		return (0);
	}
}
