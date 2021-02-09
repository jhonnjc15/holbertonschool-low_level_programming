#include "holberton.h"

/**
 * _abs - print the alphabet
 * @n: The number
 *
 * Return: 1 if is a posit. , 0 if is a negat. and -1 if is a negative number.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int n)
	{

	if (n >= 0)
		{
		return (n);
	}
	else
		{
		return (-n);
	}
}
