#include <stdio.h>
#include "holberton.h"

/**
*_strlen - Give us the length of a string
*@s: A char pointer string.
*Return: 1 if s is a palondrome, 0 if not.
*On error, -1 is returned, and errno is set appropriately.
*/

int _strlen(const char *s)
{
	if (!(*s))
		return (0);
	return (1 + _strlen(s + 1));
}

/**
*binary_to_uint - function to  converts a binary number to an unsigned int
*@b: the string input
*Return: the number of nodes
*On error, -1 is returned, and errno is set appropriately.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int power;
	unsigned int sum = 0, num;
	int total, i;

	if (b == NULL)
		return (0);
	total = _strlen(b);
	power = 1;
	for (i = total - 1; i >= 0 ; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = b[i] - '0';
		sum = sum + (num * power);
		power = power * 2;
	}
	return (sum);
}
