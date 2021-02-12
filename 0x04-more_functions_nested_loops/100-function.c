#include "holberton.h"
#include <stdio.h>

/**
 * PrimeOrNot - Makes the sum of two numbers
 * @n1: First operand
 *
 * Return: 1 or 0
*/

int PrimeOrNot(long int n1)
{
	int i;

	i = 2;
	while (i <= n1 / 2)
	{
		if (n1 % i != 0)
			i = i + 1;
		else
			return (0);
	}
	return (1);
}
