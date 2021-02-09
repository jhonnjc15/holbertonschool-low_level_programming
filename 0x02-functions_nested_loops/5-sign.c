#include "holberton.h"

/**
 * print_sign - print the alphabet
 * @n: The number
 *
 * Return: 1 if is a posit., 0 if is a negat. and -1 if is a negative number.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_sign(int n)
	{
	if (n > 0)
		{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
		{
		_putchar('0');
		return (0);
	}
	else
		{
		_putchar('-');
		return (-1);
	}
}
