#include "holberton.h"

/**
 * _islower - print the alphabet
 * @c: The character to print
 *
 * Return: 1 if c is lowercase or 0 otherwise.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _islower(int c)
	{
	if (c >= 97 && c <= 122)
		{
		return (1);
	}
	else
		{
		return (0);
	}
}
