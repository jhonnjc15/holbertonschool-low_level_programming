#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: The number
 *
 * Return: The value of the last digit
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int n)
	{
	if (n < 0)
		{
		_putchar ('0' + (-1 * (n % 10)));
		return (-1 * (n % 10));
	}
	else
		{
		_putchar ('0' + (n % 10));
		return (n % 10);
	}
}
